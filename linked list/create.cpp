//! creating a linked list

#include<iostream>
using namespace std;

//creating a node class
class node{
    public:
    // value can be of any type
    int val;
    node *next; // pointer to next node
    // next variable is of type node coz it points to next object which is already an object of node class. 
    
    // constructor
    node(int data){
        val=data;
        next=NULL; // at first we assume that the node we're creating dosent points to any other next node hence its initialized to NULL.
    }
};

int main(){
    // creating a node object
    // isse node ki data value mein 1 store hoga
     node *n= new node(1);
     cout<<n->val<<endl;
     cout<<n->next<<endl;
    return 0;
}