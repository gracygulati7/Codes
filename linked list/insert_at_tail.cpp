//! inserting in a linked list at tail of list
//* tail is a pointer of node type which will always represent the last node of the list

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

void insertattail(node* &head,int val){
    node* new_node=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    // temp has reached new node
    temp->next=new_node;
    // new_node->next=NULL;
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
    insertattail(head,3);
    display(head);
    return 0;
}



// i will make temp a pointer of node type starting from head and will traverse it till we reach the tail node
// and when temp-> next=null means we are at end node
// so now we need to insert a new node at the end so for that i will make my temp->next point to the new node that is to be inserted and that new node->next will point to null.  