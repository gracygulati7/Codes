//! BUILD TREE FROM TRAVERSALS (pre and in order)

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

node* buildTree(int preorder[],int inorder[],int st,int end){
    // When a variable is declared as static, space for it gets allocated for the lifetime of the program. 
    // Even if the function is called multiple times, space for the static variable is allocated only once 
    // and the value of the variable in the previous call gets carried through the next function call.
    static int idx=0;
    if(st>end){
        return NULL;
    }
    // preorder mein index position pe jo element hai usse curr mein store krdia coz its our root element
    int curr=preorder[idx];
    idx++;
    node* Node=new node(curr);
    if(st==end){
        return Node; // ek hi element hai so usse return krdia
    }
    int pos=search(inorder,st,end,curr);
    // build left subtree
    Node->left=buildTree(preorder,inorder,st,pos-1);
    // build left subtree
    Node->right=buildTree(preorder,inorder,pos+1,end);

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
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};

    // build tree
    node* root=buildTree(preorder,inorder,0,4);
    inorderprint(root);
    return 0;
}