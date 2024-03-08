//! inserting in a linked list at head of list

#include <iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;

    node(int data){
        val=data;
        next=NULL;
    }
};

// here we r passing by reference because we need to make changes to our original linked list
void insertathead(node* &head,int val){
    node* new_node=new node(val);
    new_node->next=head;
    head=new_node;
}


// here we r passing by value because we arent making any changes to our original linked list
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head=NULL;
    insertathead(head,2);
    display(head);
    insertathead(head,1);
    display(head);
    return 0;
}


//* LOGIC:
// add a new node at start of linked list
// new node ke next mein we will put address of current head node
// then update head node by this new node


/* #include<iostream>
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

void InsertAtHead(node* &head,int val){ // we take head by reference because we want to make changes in our original linked list. we dont wanna make a copy.
    // new node create
    node* temp=new node(val); // temp is a new node node jiski value ko aapko current head se phle lgana h or jisko new head banana hai 
    temp->next=head; // temp ka next pointer points to current head
    head=temp; // so after that make temp the current head means head mein temp node ko store karvado
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
     node* head=n;
     print(head);

    // inserting at head
    InsertAtHead(head,15);
    print(head);
    return 0;
}

*/