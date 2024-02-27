//! creating a linked list

#include<iostream>
using namespace std;

//creating a node class
class node{
    public:
    // data can be of any type
    int data;
    node *next; // pointer to next node
    // next variable is of type node coz it points to next object which is already an object of node class. 
    
    // constructor
    node(int val){
        data=val;
        next=NULL; // at first we assume that the node we're creating dosent points to any other next node hence its initialized to NULL.
    }
};

int main(){
    // creating a node object
    // isse node ki data value mein 1 store hoga
     node *n= new node(1);
     cout<<n->data<<endl;
     cout<<n->next<<endl;
    return 0;
}