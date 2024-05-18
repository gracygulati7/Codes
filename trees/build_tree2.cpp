//! BUILD TREE FROM TRAVERSALS (post and in order)

#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int search(int inorder[],int st,int end,int curr){
    for(int i=st;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

node* buildTree(int postorder[],int inorder[],int st,int end,int n){
    static int idx=n-1;
    if(st>end){
        return NULL;
    }
    // postorder mein index position pe jo element hai usse curr mein store krdia coz its our root element
    int curr=postorder[idx];
    idx--;
    node* Node=new node(curr);
    if(st==end){
        return Node; // ek hi element hai so usse return krdia
    }
    int pos=search(inorder,st,end,curr);

    // build right subtree
    Node->right=buildTree(postorder,inorder,pos+1,end,n);
    
    // build left subtree
    Node->left=buildTree(postorder,inorder,st,pos-1,n);

    return Node;
}

void inorderprint(node* root){
    if(root==NULL){
        return;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}

int main(){
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    int n=sizeof(postorder)/sizeof(postorder[0]);

    // build tree
    node* root=buildTree(postorder,inorder,0,4,n);
    inorderprint(root);
    return 0;
}