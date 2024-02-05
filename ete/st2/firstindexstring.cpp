#include<iostream>
using namespace std;
int main(){
    string str1;
    getline(cin,str1);
    string target;
    getline(cin,target);
    bool found=false;
    for (int i = 0; i <= str1.length() - target.length(); i++) {
        if (target == str1.substr(i, target.length())) {
            cout << "First occurrence of second string is at index: " << i << endl;
            found = true;
            break;
        }
    }

    if(!found){
        cout<<"-1"<<endl;
    }
    return 0;
}


//! for (int i = 0; i <= str1.length() - target.length(); i++): 
/* This is a for loop that iterates over the characters of str1 
to check for the presence of the target string. The loop starts 
at index 0 and continues until i reaches the maximum index where 
the remaining characters in str1 are greater than or equal to
the length of the target string. This is to ensure that there 
are enough characters left in str1 for a potential match with 
the target string. */  


//* if (target == str1.substr(i, target.length())): 
/* This condition checks if the substring of str1 
starting at index i and having a length equal to 
the length of the target string is equal to the 
target string. In other words, it checks if the 
current portion of str1 starting at index i 
matches the target string.  */