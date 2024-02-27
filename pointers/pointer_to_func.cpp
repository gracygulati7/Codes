//! passing pointer to function
//! imp implementation of pointers

void increment(int *p){
    //? p=*p+1; 
    // we did this because *p represent the value of a so we did *p+1 o increment value of a and store it in that memory itself.
    // we did'nt use *p++ coz ++ has more priority than * so it increment pointer address in memory to next location and then derefrences it 
    // so if we still wanna do so we can do it by (*p)++
    (*p)++;
}
#include<iostream>
using namespace std;
int main(){
    int a=2;
   // increment(a); //! this is called passing by value
    /*
    isse a ki value increment nhi hogi coz when we pass variable to a func then a new different variable is created and that variable is 
    updated with operations performed inside the func so original value a variable remains the same and hence we need pointers.
    */
    // cout<<a<<endl;

    //* when we pass the variable in the func by pointer then its called passing by reference because we're passing the address of variable.
    // and by this we can actually change the value of original variable
    int *p=&a;
    increment(p);
    cout<<a<<endl;
      
    return 0;
}