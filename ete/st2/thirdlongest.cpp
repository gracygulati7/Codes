// #include<iostream>
// #include<string>
// #include<limits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of contestants: ";
//     cin>>n;
//     cin.ignore(numeric_limits<streamsize>::max(),'\n');
//     if(n<3){
//         cout<<"not enough contestants."<<endl;
//         return 0;
//     }
//     string longest=" ", secondlongest=" ",thirdlongest=" ";
//     for(int i=0;i<n;i++){
//         string name;
//         cout<<"enter the name of contestant "<<i+1<<endl;
//         getline(cin,name);
//         if(name.length()>longest.length()){
//             thirdlongest=secondlongest;
//             secondlongest=longest;
//             longest=name;
//         }
//         else if(name.length()>secondlongest.length()){
//             thirdlongest=secondlongest;
//             secondlongest=name;
//         }
//         else if(name.length()>thirdlongest.length()){
//             thirdlongest=name;
//         }
//     }
//     cout<<"third longest contestant name is: "<<thirdlongest<<endl;
//     return 0;
// }


#include<iostream>
#include<string>
#include<limits>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    if(n<3){
        cout<<"not enough contestants"<<endl;
    }
    string longest=" ",second=" ",third=" ";
    for(int i=0;i<n;i++){
        string name;
        cout<<"enter the name of contestant "<<i+1<<endl;
        getline(cin,name);
        if(name.length()>longest.length()){
            third=second;
            second=longest;
            longest=name;
        }
        else if(name.length()>second.length()){
            third=second;
            second=name;
        }
        else if(name.length()>third.length()){
            third=name;
        }
    }
    cout<<third<<endl;
}