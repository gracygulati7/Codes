#include<iostream>
using namespace std;
int main(){
    int a=10; // stored in stack
    int *p=new int; // new allocates memory in heap
    *p=10; // p is stored in stack but it points to memory address in heap
    // memory allocation in heap is done dynamically
    delete(p); // deallocates memory in heap
    // even after deallocation, (when no value is present at that address in heap) still p is still pointing to that memory address in heap which is known as dangling pointer
    p=new int[4]; // to store array of 4 elements in heap
    // now p will point to the memory address of 0th index of array
    delete[]p; // deallocates memory of array and deletes it from heap
    p=NULL; // p is no longer pointing to any memory address in heap

    // stack mein memory allocation and deallocation is done automatically by the system whereas in heap its done manually by users.
    
    return 0;
}