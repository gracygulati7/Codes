#include <bits/stdc++.h>
using namespace std;

// vector<int> adj_list[]: Adjacency list to store the graph
// vector<bool> &visited: Visited array to keep track of visited nodes and using
// & means we are passing the reference of the visited array basically we are
// not creating a new copy of the visited array and we are using the same array
// in the function and in the main function
// but for the adj_list we are not passing the reference because we are not
// going to change the adj_list in the function so we are passing the copy of
// the adj_list array in the function
void Bfs(vector<int> adj_list[], int startNode, vector<bool> &visited)
{
  // Queue to store the nodes to be visited
  queue<int> exploration;
  // Push the starting node
  exploration.push(startNode);
  // Mark the starting node as visited
  visited[startNode] = true;
  // While there are nodes to be visited
  while (!exploration.empty())
  {
    // Get the front node
    int frontNode = exploration.front();
    // Pop the front node
    exploration.pop();
    // Print the front node
    cout << frontNode << " ";
    // Visit all the nodes adjacent to the front node
    // adj_list[frontNode].size() is the number of adjacent nodes to the
    // frontnode means the number of nodes connected to the frontnode
    for (int i = 0; i < adj_list[frontNode].size(); i++)
    {
      // Get the adjacent node
      // adj_list[frontNode][i] is the ith adjacent node to the frontnode
      // Basically, adj_list[frontNode] is the list of adjacent nodes to the
      // frontnode and adj_list[frontNode][i] is the ith adjacent node to the
      // frontnode
      int adjNode = adj_list[frontNode][i];
      // If the adjacent node is not visited
      if (!visited[adjNode])
      {
        // Mark the adjacent node as visited
        visited[adjNode] = true;
        // Push the adjacent node to the exploration queue
        exploration.push(adjNode);
      }
    }
  }
}

void Dfs(vector<int> adj_list[], int startNode, vector<bool> &visited)
{
  // Mark the starting node as visited
  visited[startNode] = true;
  // Print the starting node
  cout << startNode << " ";
  // Visit all the nodes adjacent to the starting node
  // adj_list[startNode].size() is the number of adjacent nodes to the starting
  // node means the number of nodes connected to the starting node
  for (int i = 0; i < adj_list[startNode].size(); i++)
  {
    // Get the adjacent node
    // adj_list[startNode][i] is the ith adjacent node to the starting node
    // Basically, adj_list[startNode] is the list of adjacent nodes to the
    // starting node and adj_list[startNode][i] is the ith adjacent node to the
    // starting node
    int adjNode = adj_list[startNode][i];
    // If the adjacent node is not visited
    if (!visited[adjNode])
    {
      // Visit the adjacent node
      Dfs(adj_list, adjNode, visited);
    }
  }
}

void addEdge(vector<int> adj_list[], int u, int v)
{
  // Adding the edge from u to v
  // u ko v ki jagh pe push kar diya means u se v ki taraf edge add kar diya
  // Basically, the graph is bi-directional and hence the source is added to the
  // destination and vice versa
  // on the uth index store the vth node because v is the neighbour of u
  adj_list[u].push_back(v);
  // Adding the edge from v to u because u is also neighbour of v as graph is bidirectional
  adj_list[v].push_back(u);
}

void deleteEdge(vector<int> adj_list[], int u, int v)
{
  // Deleting the edge from u to v
  // u ko v ki jagh se hata diya means u se v ki taraf edge delete kar diya
  // Basically, the graph is bi-directional and hence the source is deleted from
  // the destination and vice versa
  // on the uth index remove the vth node because v is the neighbour of u
  adj_list[u].erase(remove(adj_list[u].begin(), adj_list[u].end(), v),
                    adj_list[u].end());
  // Deleting the edge from v to u
  adj_list[v].erase(remove(adj_list[v].begin(), adj_list[v].end(), u),
                    adj_list[v].end());
}

void printGraph(vector<int> adj_list[], int V)
{
  // i is the vertex of the graph and adj_list[i] is the list of adjacent nodes
  // to the ith vertex
  for (int i = 0; i < V; i++)
  {
    cout << i << " -> ";
    // Sorting the adjacent nodes to the ith vertex so that the output is in the
    // order of the nodes
    sort(adj_list[i].begin(), adj_list[i].end());
    // j is basically the adjacent node to the ith vertex and adj_list[i][j] is
    // the jth adjacent node to the ith vertex
    // For example,
    // 0 -> 1 2
    // 1 -> 0 2
    // 2 -> 0 1
    // Now,
    // i = 0, adj_list[i] = [1, 2]
    // j = 0, adj_list[i][j] = 1
    // j = 1, adj_list[i][j] = 2
    // Basically, j is the index of the adjacent node to the ith vertex
    for (int j = 0; j < adj_list[i].size(); j++)
    {
      // If the adjacent node is repeated then skip the adjacent node
      // j > 0 means the adjacent node is not the first node and adj_list[i][j]
      // == adj_list[i][j - 1] means the adjacent node is repeated so skip the
      // node
      if (j > 0 && adj_list[i][j] == adj_list[i][j - 1])
      {
        continue;
      }
      // Print the adjacent node
      cout << adj_list[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{
  // Number of vertices
  int V = 5;
  // Adjacency list
  //   Adjacency list is a collection of linked lists used to represent
  //   the graph. In this representation, the ith list represents the list
  //   of vertices adjacent to the ith vertex.
  /*
  Example:
    0 -> 1 -> 2
    1 -> 0 -> 2 -> 3
    2 -> 0 -> 1 -> 4
    3 -> 1 -> 4
    4 -> 2 -> 3

    Left side -> Vertices of the graph (0, 1, 2, 3, 4)
    Right side -> Adjacent vertices of the vertices on the left side (0 ->
  1, 2 : 0 is connected to 1 and 2)
  */
  vector<int> adj_list[V];
  // Adding edges to the graph
  addEdge(adj_list, 0, 1);
  addEdge(adj_list, 0, 2);
  addEdge(adj_list, 1, 2);
  addEdge(adj_list, 1, 3);
  addEdge(adj_list, 2, 4);
  addEdge(adj_list, 3, 4);
  //   Output Graph:
  //   0 -> 1 -> 2
  //   1 -> 0 -> 2 -> 3
  //   2 -> 0 -> 1 -> 4
  //   3 -> 1 -> 4
  //   4 -> 2 -> 3
  // Visited array to keep track of visited nodes
  vector<bool> visited(V, false);
  // Starting node
  int startNode = 0;
  // BFS traversal
  Bfs(adj_list, startNode, visited);
  return 0;
}