//! deletion at tail

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
    temp->next=new_node;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteattail(node* &head){
    node* second_last=head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;
    }
    // now second_last points to second last node
    node* temp=second_last->next; // node to be deleted
    second_last->next=NULL;
    delete temp; // or free(temp)
}

int main(){
    node* head=NULL;
    insertathead(head,2);
    display(head);
    insertathead(head,1);
    display(head);
    insertattail(head,3);
    display(head);
    deleteattail(head);
    display(head);
    return 0;
}


//* LOGIC:
// second last node should point to NULL
// a pointer should traverse from head to second last node
// second last node -> next -> next will point to NULL
// so loop should traverse from head to second_last->next->next != NULL
// and then temp should point to second_last->next which is the last node
// then second_last->next=NULL making it last node
// then delete temp that stores last node.