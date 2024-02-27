//! inserting in a linked list at tail of list
//* tail is a pointer of node type which will always represent the last node of the list

#include<iostream>
using namespace std;

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

void InsertAtTail(node* &tail,int val){ // we take tail by reference because we want to make changes in our original linked list. we dont wanna make a copy.
    // new node create
    node* new_node=new node(val); // temp is a new node node jiski value ko aapko current tail ke baad lgana h or jisko new tail banana hai 
    node* temp=tail; // tail ka next pointer should point to temp so that temp becomes the new tail
    tail=temp; // now temp is new tail.
    // (tail=tail->next;) // so after that make temp the current tail means tail mein tail ke next pointer ko store krvado that now points to temp.
}

// traverse the linked list
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    // creating a node object
    // isse node ki data value mein 1 store hoga
     node *n= new node(10);
     cout<<n->data<<endl;
     cout<<n->next<<endl;

     // head pointed to n
     node* tail=n;
     print(tail);

    // inserting at head
    InsertAtTail(tail,15);
    print(tail);
    return 0;
}