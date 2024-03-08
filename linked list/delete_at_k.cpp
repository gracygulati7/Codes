//! updation at kth positio in singly linked list

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

void insertatpos(node* &head,int val,int pos){
    if(pos==0){
        insertathead(head,val);
        return;
    }
    node* new_node= new node(val);
    node* temp=head;
    int curr_pos=0;
    while(curr_pos!=pos-1){
        temp=temp->next;
        curr_pos++;
    }
    new_node->next=temp->next;
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

void updateatk(node* head,int val,int k){
    node* temp=head;
    int curr_pos=0;
    while(curr_pos!=k){
        temp=temp->next;
        curr_pos++;
    }
    temp->val=val;
}

void deleteathead(node* &head){
    node* temp=head; 
    head=head->next;
    delete temp; 
}

void deleteatk(node* &head,int k){
    if(k==0){
        deleteathead(head);
        return;
    }
    node* prev=head;
    int curr_pos=0;
    while(curr_pos!=k-1){
        prev=prev->next;
        curr_pos++;
    }
    // now prev is pointing to k-1 position
     node* temp=prev->next; // node to be deleted
     prev->next=prev->next->next;
     delete temp;
}

int main(){
    node* head=NULL;
    insertathead(head,2);
    display(head);
    insertathead(head,1);
    display(head);
    insertattail(head,3);
    display(head);
    insertatpos(head,4,1);
    display(head);
    updateatk(head,5,2);
    display(head);
    deleteatk(head,1);
    display(head);
    return 0;
}


//* LOGIC: 
// to delete node at pos k we need the k-1 node->next to point to k+1 node
// prev will traverse till k-1 pos and prev=prev->next
//  temp will point to prev-> next and get deleted
// prev->next=prev->next->next which is pointing to k+1 node