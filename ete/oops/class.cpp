#include<iostream>
#include<cstring>
using namespace std;
class hero{
    private:
    char level;
    public:
    int health;
    char *name;
    static int timetocomplete;

    // constructor
    hero(){
        cout<<"simple constructor called "<<endl;
        name= new char[100];
    }
    //parametrised constructor
    hero (int health){
        this->health=health;
    }
    hero (int health,char level){
        this->health=health;
        this->level=level;
    }
    //copy constructor
    hero(hero& temp){
        char *ch=new char[strlen(temp.name)+1] ;
        strcpy(ch,temp.name);
        this->name=ch;
        cout<<"copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"name: "<<this->name<<" ,";
        cout<<"health: "<<this->health<<" ,";
        cout<<"level: "<<this->level<<endl;
    }

    //getter
    char getlevel(){
        return level;
    }
    int gethealth(){
        return health;
    }
    //setter
    void sethealth(int h){
        health=h;
    }
    void setlevel(char ch){
        level=ch;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }
    static int random(){
        return timetocomplete;
    }

    //destructor
    ~hero(){
        cout<<"destructor called"<<endl;
    }
};
int hero::timetocomplete=5;
int main(){

    cout<<hero::timetocomplete<<endl;
    cout<<hero::random()<<endl;

    // hero a;                //static
    // hero *b=new hero;      // dynamic
    // delete b;              // manually destructor called

    // hero h1;
    // h1.sethealth(70);
    // h1.setlevel('B');
    // char name[7]="gracy";
    // h1.setname(name);
    // // h1.print();

    // hero h2(h1);
    // //h2.print();

    // h1.name[0]='s';
    // h1.print();
    // h2.print();      

    // h1=h2;
    // h1.print();
    // h2.print();

    // hero bahubali(70,'C');
    // bahubali.print();

    // //copy constructor 
    // hero rocky(bahubali);
    // rocky.print();

    


   /* hero ramesh(10);
    ramesh.sethealth(70);
    ramesh.print();
    hero mish(22,'B');
    mish.print(); */

    /*   
    hero ramesh;               //static
    hero *h= new hero;         // dynamic
    //static 
    ramesh.sethealth(70);
    cout<<"health is: "<<ramesh.health<<endl;
    cout<<"level is: "<<ramesh.getlevel()<<endl;  
    cout<<"level is: "<<ramesh.getlevel()<<endl;  // garbage value
    ramesh.setlevel('B');
    cout<<"level is: "<<ramesh.getlevel()<<endl;  // uses set value 
    //dynamically
    (*h).sethealth(70);
    //! (*h). can be written as b->
    cout<<"health is: "<<h->health<<endl;
    cout<<"level is: "<<h->getlevel()<<endl;  
    h->setlevel('B');
    cout<<"level is: "<<h->getlevel()<<endl;  */
    

    return 0;
}