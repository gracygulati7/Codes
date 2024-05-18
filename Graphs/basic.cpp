#include<bits/stdc++.h>
using namespace std;
vector<int> bfs(int startnode, vector<int> adj[],vector<bool>& visited){
    queue<int> q;
    q.push(startnode);
    visited[startnode] = true;
    vector<int> bfs;
    while(!q.empty()) {
        int front=q.front();
        q.pop(); 
        // cout<<front<<" ";
        bfs.push_back(front);
        for(int i=0;i<adj[front].size();i++){
            int adjnode=adj[front][i];
            if(!visited[adjnode]){
                visited[adjnode] = true;
                q.push(adjnode);
            }
        }
    }
    return bfs;
}

int main(){
    int n,m; // n= number of nodes and m=number of edges
    cin>>n>>m;

    //* adjacency matrix
    /* int adj[n+1][m+1]; // this is for 1 based indexing 
    // for 0 based indexing u can simply take adj[n][m]
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    } */

    //* adjacency List (vector)
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}