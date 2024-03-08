//! traversal in a singly linked list 
//* there is no indexing in linked list

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

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head=new node(1);
    display(head);
    
    return 0;
}


// here we will create a new pointer temp which will traverse through linked list jisko hum start krenge by storing head
// and temp=temp->next by this it will traverse through all linked list elements until temp->next != NULL

