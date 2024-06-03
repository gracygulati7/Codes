//! 1. Array Input

/*
#include<bits/stdc++.h>
using namespace std;

//* [1,2,3,4,5,-1,6]
      
//*        1
//*       / \
//*      2   3
//*     / \   \
//*    4   5   6

class TreeNode{
    public:
    int val; 
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        val=data;
        left=right=NULL;
    }
};

void display(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        for(int i=0;i<size;i++){
            TreeNode* front=q.front(); q.pop();
            cout<<front->val<<" ";
            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
        }
        cout<<endl;
    }
}

TreeNode* build(vector<int>& arr){
    if(arr.size()==0) return NULL;
    TreeNode* root=new TreeNode(arr[0]);
    queue<TreeNode*> q;
    q.push(root); int i=1;
    while(!q.empty() && i<arr.size()){
        TreeNode* front=q.front(); q.pop();
        if(arr[i]!=-1){
            front->left=new TreeNode(arr[i]);
            q.push(front->left);
        }
        i++;
        if(i<arr.size() && arr[i]!=-1){
            front->right=new TreeNode(arr[i]);
            q.push(front->right);
        }
        i++;
    }
    return root;
}

int main(){
    int n; cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    TreeNode* root=build(arr);
    display(root);
    return 0;
}
*/

//! 2. Runtime Input

/*
#include<bits/stdc++.h>
using namespace std;

//* 1 2 3 4 6 -1 5 -1 -1 7 -1 -1 -1 -1 -1

//*         1
//*       /   \
//*      2      3
//*     / \      \
//*    4   6      5
//*       /
//*      7

class TreeNode{
    public:
    int val; 
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        val=data;
        left=right=NULL;
    }
};

void display(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        for(int i=0;i<size;i++){
            TreeNode* front=q.front(); q.pop();
            cout<<front->val<<" ";
            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
        }
        cout<<endl;
    }
}

TreeNode* build(){
    int x; cin>>x;
    TreeNode* root=new TreeNode(x);
    queue<TreeNode*> q; q.push(root);
    while(!q.empty()){
        int s=q.size();
        for(int i=0;i<s;i++){
            TreeNode* curr=q.front(); q.pop();
            int left, right;
            cin>>left>>right;
            if(left!=-1){
                curr->left=new TreeNode(left);
                q.push(curr->left);
            }
            if(right!=-1){
                curr->right=new TreeNode(right);
                q.push(curr->right);
            }
        }
    }
    return root;
}

int main(){
    TreeNode* root=build();
    display(root);
    return 0;
}
*/

//! 3. Boolean Value Input

/*
#include<bits/stdc++.h>
using namespace std;

//*  10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
// what will be its tree structure?


//*                   10
//*                 /   \
//*                20    40
//*               / \    /
//*              30  60  50
//*                   \
//*                    73

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        val=data;
        left=right=NULL;
    }
};

void display(TreeNode* root){
    queue<TreeNode*> q; q.push(root);
    while(!q.empty()){
        int s=q.size();
        for(int i=0;i<s;i++){
            TreeNode* curr=q.front(); q.pop();
            cout<<curr->val<<" ";
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        cout<<endl;
    }
}

TreeNode* build(){
    int x; cin>>x;
    TreeNode* root=new TreeNode(x);
    string left,right;
    cin>>left;
    if(left=="true"){
        root->left=build();
    }
    cin>>right;
    if(right=="true"){
        root->right=build();
    }
    return root;
}

int main(){
    TreeNode* root=build();
    display(root);
    return 0;
}
*/

