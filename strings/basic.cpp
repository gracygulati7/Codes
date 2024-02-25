#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    //!string declaration methods-
/*
    //1st method-
    string s="GRACYGULATI";
    cout<<s<<endl;
    //without space string is printed

    //2nd method-
    string str;
    cin>>str;
    cout<<str;
    //? with cin if u take a sentence input with spaces so it will print only first word before space.

    //3rd method-
    string str1(5,'n');
    //*string strname(size,value) meaning value will be printed size times.
    cout<<str1<<endl;

    //4th method-
    string S;
    getline(cin,S);
    cout<<S<<endl;
    //can take input and output of string with spaces
*/

     //!Different functions of strings:

    //*1. concatenation:
    //  string s1="fam" ;      
    //  string s2="ily" ;

     //s1.append (s2); this will append s2 to s1
    //  s1=s1+s2;
    //  cout<<s1<<endl; 
    
    //*2. accessing characters
    // cout<<s1[1]<<endl;
    
    //*3. clear func():
    // string abc="xdbhjkl jhgcfzfg uytrd bnkl";
    // abc.clear();
    // cout<<abc<<endl;

    //*4. comparision of strings
    // string s1="abc";
    // string s2="xyz";
    //cout<<s2.compare(s1)<<endl;
    // comapres value of string that is both both strings are same or not
    // does not compare their sizes but values.
    //returns 0 if equal, else 1 if not equal
    // means comapre func return false when strings are equal.
    // if(s1.compare(s2)==0){
    //     cout<<"strings are equal";
    // }
    // if(!s1.compare(s2)){
    //     cout<<"equal"<<endl;
    // }

    //*5. empty func():
    // string str="abc";
    // str.clear();
    // if(str.empty()){
    //     cout<<"empty string."<<endl;
    // }

    //*6.erase func():
    // string str="nincompoop";
    // str.erase(3,3);
    // arguments- start index to how many characters to be deleted
    // cout<<str<<endl;

    //*7. find():
    // to find a substring position in a given string
    // string s1="nincompoop";
    // cout<<s1.find("poo")<<endl;

    //*8. insert:
        // string s1="nincompoop";
        // s1.insert(2,"lol");
        //arguments- kis index pe insert krna h, kya value insert krni h
        // cout<<s1<<endl;

    //*9. length();
    // string s1="nincompoop";
    // cout<<s1.length()<<endl;
    //? iterating over the string:
    // for(int i=0;i<s1.length();i++){
    //     cout<<s1[i]<<" ";
    // }

    //*10. substring:
    // string s1="nincompoop";
    // string s=s1.substr(6,4);
    //arguments: kis index se chahiye, kitne letters chahiye uss index se
    //cout<<s<<endl;

    //*11. numeric string: (str->int)
    // string num="123";
    // int x = stoi(num);
    // cout<<x+2<<endl;
    //adds 2 to int 123 making it 125

    //*12. int->str 
    // int x=786;
    // cout<<to_string(x) + "2" <<endl;
    // concatenates 2 at the end of string 786

    //*13. sort func():
    // string s1="blahblahblah";
    // sort(s1.begin(),s1.end());
    // cout<<s1<<endl;
    // sorts based on lexiography
    //this func need #include<algorithm> for it to run.

    //!STL-> STNDARD TEMPLATE LIBRARY
    //* strings are included in stl.

    //* 14. substrings:
    string str="helloworld";
    string substr=" ";
    int start,end;
    cin>>start>>end;
    for(int i=start;i<end;i++){
        substr+=str[i];
    }
    cout<<substr<<endl;

    return 0;
}