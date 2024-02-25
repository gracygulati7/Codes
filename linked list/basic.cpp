#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next; // pointer to next node
    // next variable is of type node coz it points to next object which is already an object of node class. 
    
    // constructor
    node(int val){
        data=val;
        next=NULL; // at first we assume that the node we're creating dosent points to any other next node hence its initialized to NULL.
    }
};

void insertattail(node* &head,int val){
    node* n=new node(val);
    node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

}

int main(){
     
    return 0;
}