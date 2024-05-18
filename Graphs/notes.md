# Graph
- its a non-linear data structure
- graph G=(V,E) is a collection of vertices and edges connecting these vertices.

*Components:*
1. nodes- these are the vertices in a graph. for instance, users in case of fb
2. edges- links between 2 vertex in a graph. for instance, connection between users. <br>
-> two types of edges are there.
- undirected- two way connection <->
- directed- one way connection (-> or <-)

**Types of GRAPHS:**
- directed graph -> all directed edges
- undirected graph -> all undirected edges
- cycle in a graph -> if u start from a node and u can reach back to that node then the graph is said to be cyclic
- acyclic graph -> if u start from a node and u cannot reach back to that node by following any path then graph is said to be acyclic graph

### Path:
- contains a list of nodes and each of them are reachable by following edges between them
- all adjacent nodes in a path have an edge connecting them
- a node cant appear more than once in a path

### Degree in Graph:
*note:* this is for undirected graph <br>
degree of a node is defined as number of edges attached to it. <br>
PROPERTY: total degree of the graph = (2 * number of edges in the graph)  bcoz every edge is associated to two nodes.

This is for directed graphs: <br>
*Indegree and Outdegree of a node:*
- indegree = no. of edges coming towards the node
- outdegree = no. of edges going out of node

**Representation of graphs:**
1. adjacency matrix (O(n^2) time complexity)
- it is a 2d array, where a[i][j]=1 if there is an edge from i to j else a[i][j]=0
2. adjacency list (O(2*E) time complexity) this is better one 
- it is an array of lists, where each a[i] is a list of nodes x<sub>i</sub> that are reachable from i.

*Two types of searches are there DFS and BFS:*
1. DFS (depth first search)
2. BFS (breadth first search)

