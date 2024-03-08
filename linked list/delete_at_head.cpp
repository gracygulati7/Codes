//! deleting the head node

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

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteathead(node* &head){
    node* temp=head; // node to be deleted
    head=head->next;
    delete temp; // deleting the first node after moving head to next node.
    // free(temp); // this func will free memory space of pointer passed
}

// we can do it either way by delelte temp or by free(temp) both is doing same thing

int main(){
    node* head=NULL;
    insertathead(head,2);
    display(head);
    insertathead(head,1);
    display(head);
    deleteathead(head);
    display(head);
    return 0;
}


//* LOGIC: 
// temp will point to head
// head pointer will be moved to head->next
// then remove temp 