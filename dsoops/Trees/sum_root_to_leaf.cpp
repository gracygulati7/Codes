#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x),left(NULL),right(NULL){}
};
TreeNode* build(){
    int x;
    cin>>x;
    TreeNode* root=new TreeNode(x);
    queue<TreeNode*>q;  q.push(root);
    while(!q.empty()){
        int size=q.size();
        for(int i=0;i<size;i++){
            TreeNode* front=q.front(); q.pop();
            int left,right; cin>>left>>right;
            if(left!=-1){
                front->left=new TreeNode(left);
                q.push(front->left);
            }
            if(right!=-1){
                front->right=new TreeNode(right);
                q.push(front->right);
            }
        }
    }
    return root;
}
void display(TreeNode* root){
    queue<TreeNode*>q; q.push(root);
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
int bfs(TreeNode* root,int sum){
    if(!root) return 0;
    sum=sum*10+root->val;
    if(!root->left && !root->right) return sum;
    return bfs(root->left,sum)+bfs(root->right,sum);
}
int sumroottoleaf(TreeNode* root){
    return bfs(root,0);
}
int main(){
    TreeNode* root=build();
    display(root);
    cout<<sumroottoleaf(root);
}