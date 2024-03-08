//! insertion at kth position in linked list

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

    // temp is pointing to node at pos-1.
    new_node->next=temp->next;
    temp->next=new_node;
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
    insertatpos(head,4,1);
    display(head);
    return 0;
}


//* LOGIC:
// head will be given and position at which new node is to be inserted
// so the position at which i want to insert new node say k is that position, so k-1 position will point to my new_node and new_node will point to kth position's node.
// so i will have temp which i will traverse from head till k-1 position 
// then i will store temp-> next that will point to k position i will store that in my new_node-> next
// then i will make temp->next point to my new_node