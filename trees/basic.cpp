//! BINARY TREE INTRODUCTION

#include "bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    // pointer poitning to left child 
    struct Node* left;
    // pointer poitning to right child 
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void print(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

int main(){
    struct Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
/*
        1
       / \
      2   3
*/

   root->left->left=new Node(4);
   root->left->right=new Node(5);

   /*
                1
               / \
              2   3
             / \
            4   5
   */

  root->right->left=new Node(6);
  root->right->right=new Node(7);

  /*
                 1
               /  \
              2     3
             / \   / \ 
            4   5  6  7
   */
  

    print(root);

    return 0;
}