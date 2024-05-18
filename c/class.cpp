#include<iostream>
using namespace std;
class rhombus{
	int sides;
	int diagonal_one;
	int diagonal_two;
public:
	rhombus(){
		sides=0;
		diagonal_one=0;
		diagonal_two=0;
	}
	rhombus(int s,int d1,int d2){
		sides=s;
		diagonal_one=d1;
		diagonal_two=d2;
	}
	void disp() const{
		cout<<"Side is: "<<sides<<endl;
		cout<<"Diagonal 1 is: "<<diagonal_one<<endl;
		cout<<"Diagonal 2 is: "<<diagonal_two<<endl;
		cout<<endl;
	}
    void ar(){
        cout<<"The Area is: "<<(diagonal_one*diagonal_two)/2<<endl;
    }
    void per(){
        cout<<"The Perimeter is: "<<4*sides<<endl;
    }
};
int main(){
    rhombus s(4,5,6);
    s.disp();
    s.ar();
    s.per();

	rhombus defRhombus; 
    defRhombus.disp();  
    defRhombus.ar();    
    defRhombus.per(); 
    return 0;
}



