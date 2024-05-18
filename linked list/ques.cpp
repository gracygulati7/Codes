//! 1. given the head of a linkedlist, delete every alternate element from the list starting from second element.

/*
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int d){
        data=d;
        next=NULL;
    }
};

class LinkedList{
    public:
    node* head;

    LinkedList(){
        head=NULL;
    }

    void insertattail(int value){
        node* new_node=new node(value);
        if(head==NULL){ // ll is empty
            head=new_node;
            return;
        }
        node* temp=head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }

    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

void deletealternate(node* &head){
    node* curr=head;
    while(curr!=NULL && curr->next!=NULL){
        node* temp=curr->next; // node to be deleted
        curr->next=curr->next->next;
        delete temp;
        curr=curr->next;
    }
}

int main(){
    LinkedList ll;
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(4);
    ll.insertattail(5);
    ll.display();
    deletealternate(ll.head);
    ll.display();
}

//* LOGIC:
// curr pointer will traverse whole linked list
// curr k next element ko delte krna hai
// temp = curr->next
// curr->next=curr->next->next
// delete temp

// stopping condition:
// curr->next == null (odd elements)
// curr==null (even elements)

*/

//! 2. Pattern: Deleting elements from singly linked list
//! -> given head of sorted linkedlist, delete all duplicates such that each element appears only once. return linkedlist sorted as well.

/*
#include<iostream>
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

class LinkedList{
    public:
    node* head;

    LinkedList(){
        head=NULL;
    }
    
    void insertattail(int value){
        node* new_node= new node(value);

        if(head==NULL){
            head=new_node;
            return;
        }
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }

    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

void deletedupdates(node* head){
    node* curr=head;
    while(curr!=NULL){
        while(curr->next!=NULL && curr->val==curr->next->val){
            // delete curr->next
            node *temp=curr->next; // node to be deleted
            curr->next=curr->next->next;
            delete temp;
        }
        // this loop ends when curr->val and curr->next->val are not same or when curr->next==NULL (ie ll ends)
        curr=curr->next;
    }
}

int main(){
    LinkedList ll;
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(3);
    ll.insertattail(3);
    ll.display();
    deletedupdates(ll.head);
    ll.display();
}

//* LOGIC:
// traverse whole ll by curr
// compare curr and curr->next
// temp = curr->next
// if they are equal curr=curr->next->next
// so delete temp
// loop of : if curr==curr->next

*/

//! 3. given head of singly linked list, print reversed list

/*
#include<iostream>
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

class LinkedList{
    public:
    node* head;

    LinkedList(){
        head=NULL;
    }
    
    void insertattail(int value){
        node* new_node= new node(value);

        if(head==NULL){
            head=new_node;
            return;
        }
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }

    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

void reverse(node* &head){
    // base case
    if(head==NULL){
        return;
    }
    // recursive call
    reverse(head->next);
    cout<<head->val<<" ";
}

int main(){
    LinkedList ll;
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.display();
    reverse(ll.head);
}

//* LOGIC:
// in recursive stack there is rule of LIFO (last in first out)
*/

//! 4. Reverse the linked list

/*
#include<iostream>
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

class LinkedList{
    public:
    node* head;

    LinkedList(){
        head=NULL;
    }
    
    void insertattail(int value){
        node* new_node= new node(value);

        if(head==NULL){
            head=new_node;
            return;
        }
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }

    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

node* reverse(node* &head){
    node* prev=NULL; node* curr=head;
    while(curr!=NULL){
        node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    // when this loop ends, prev will be pointing to last node which will be new head
    return prev;
}

int main(){
    LinkedList ll;
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(4);
    ll.display();
    ll.head=reverse(ll.head); // reversed original ll
    ll.display();
}


//* LOGIC:
// take two pointers prev point to NULL (because after reversal first node should point to NULL) and curr to head 
// take another pointer next pointing to curr->next
// now curr->next=prev 
// moving all of them forward: prev=curr, curr=next, next=next->next
// now head will be given by prev pointer
*/

// we can do so by recursion also :

/*
#include<iostream>
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

class LinkedList{
    public:
    node* head;

    LinkedList(){
        head=NULL;
    }
    
    void insertattail(int value){
        node* new_node= new node(value);

        if(head==NULL){
            head=new_node;
            return;
        }
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }

    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

node* reversell(node* &head){
    // base case
    if(head==NULL || head->next==NULL){
        return head;
    }

    // recurisve case
    node* new_head=reversell(head->next);
    head->next->next=head;
    head->next=NULL; // head is now pointing to last node in reversed ll
    return new_head;
}


int main(){
    LinkedList ll;
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(4);
    ll.display();
    ll.head=reversell(ll.head); // reversed original ll
    ll.display();
}

//* LOGIC:
// pass head->next in recursion
// head->next->next=head
// head->next=NULL

*/

//! 5. given head of a ll, reverse the nodes of the lust k at a time, and return the modified list
//* eg 1: if ll= 1->2->3->4->5->6 and k=2 so output: 2->1->4->3->6->5
//* eg 2: if ll= 1->2->3->4->5->6 and k=3 so output: 3->2->1->6->5->4

/*
#include<iostream>
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

class LinkedList{
    public:
    node* head;

    LinkedList(){
        head=NULL;
    }
    
    void insertattail(int value){
        node* new_node= new node(value);

        if(head==NULL){
            head=new_node;
            return;
        }
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }

    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

node* reversek(node* &head,int k){
    node* prev=NULL; node* curr=head;
    int count=0; // for counting fisrt k nodes
    while(curr!=NULL && count<k){ // reversing first k nodes
        node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    // curr will give us (k+1)th node
    if(curr!=NULL){
        node* new_head=reversek(curr,k); // recursive call
        head->next=new_head;
    }
    return prev; // this will give new_head of connect linked list
}


int main(){
    LinkedList ll;
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(4);
    ll.insertattail(5);
    ll.insertattail(6);
    ll.display();
    // ll.head=reversek(ll.head,2);
    ll.head=reversek(ll.head,3);
    ll.display();
}


//* LOGIC:
// first k nodes ko normal reverse krlo
// and then next k+1 to last node ko recursively reverse kralo k nodes at a time.
// means first k nodes k alawa baki nodes ko recursion reverse krke de rha hai k nodes at a time
// jo recursive func ka new head hai hai usse mera curr head point krega nad my last head of the list that should be displayed will be given by prev pointer

*/


