#include<iostream>
using namespace std;
int main(){
    int month;
    cout << "enter the month number: " ;
    cin >> month;
    switch(month){
        case 1:
            cout << "it is jan" ;
            break;
        case 2:
            cout << "it is feb" ;
            break;
        case 3:
            cout << "it is march" ;
            break;
        case 4:
            cout << "it is april" ;
            break;
        case 5:
            cout << "it is may" ;
            break;
        case 6:
            cout << "it is june" ;
            break;
        case 7:
            cout << "it is july" ;
            break;
        case 8:
            cout << "it is aug" ;
            break;
        case 9:
            cout << "it is sept" ;
            break;
        case 10:
            cout << "it is oct" ;
            break;
        case 11:
            cout << "it is nov";
            break;
        case 12:
            cout << "it is dec";
            break;
        default:
            cout << "please enter no. btw 1-12 only "; 
    }

    return 0;
}