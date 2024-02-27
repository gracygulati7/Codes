#include<iostream>
using namespace std;
int main(){
    //! accessing and modifying variable value using pointer
    int a=10;
    // int type ke character ko hum point krana chahte hai hence we wrote int *var_name
    // jis bhi data type k variable k address ko hum store krana chahte hai , pointer bhi ussi data type ka banate hai. 
    int *aptr;
    // & is used to get address of variable
    aptr=&a;
    // cout<<&a<<endl; // address of a variable
    cout<<"address of a: "<<aptr<<endl; // address of a variable
    //this is dereferencing of pointer means pointer se value nikalne k liye *ptr use hota hai
    cout<<"value of a: "<<*aptr<<endl; // value of 'a' variable
    // so basically we can access and modify the value of variable by the pointer that stores its address.
    *aptr=20;
    cout<<"address of a: "<<aptr<<endl;
    cout<<"value of a: "<<a<<endl;
    
    //! pointer arithmetic operation
    aptr++;
    cout<<"address of a: "<<aptr<<endl;
    cout<<"value of a: "<<*aptr<<endl;
    

    char ch='a';
    char *cptr=&ch;
    cout<<"address of ch: "<< (void *)cptr <<endl;
    // (void *)cptr has no associated data type and its used to print the address for any data type
    cout<<"value of ch: "<<*cptr<<endl;
    
    //! pointers and arrays
    int arr[]={10,20,30};
    cout<<*arr<<endl; // arr always points to address of first element in array.
    int *ptr=arr; // we are not using &arr[0] coz arr itself is pointer to first element in array
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
    }
    // ptr++ krke vo memory mein 4 bytes aage bdh jayega jha usse array ka second element milega
    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;
        // arr++; //illegal
    } 
//! arr which stores the address of the first element is inmodifiable coz its a constant pointer 
//! so we cannot increment it like arr++ to move to next element in array
// but we can do *(arr+i) instead of arr++ to move forward to next element in array
// arr is indexing pointer in array so it will move to next index when we add i and not to the next memory. hence we didt use 4i.   
    return 0;
}