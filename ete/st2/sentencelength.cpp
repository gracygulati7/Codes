#include<iostream>
using namespace std;
int totallength(string sentence, int index=0){
    if(index>=sentence.size()){
        return 0;
    }
    if(sentence[index]!=' '){
        return 1+ totallength(sentence,index+1);
    }
    else{
        return totallength(sentence,index+1);
    }
}
int main(){
    string sentence;
    cout<<"enter a string"<<endl;
    getline(cin,sentence);
    int length= totallength(sentence);
    cout << "Length (excluding whitespaces): " << length << endl; 
    cout <<"Length (including whitespaces): "<<sentence.length()<<endl; 
}