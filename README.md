# MCQS

## DP
1. Coin Change : can be efficiently solved using a greedy algorithm
2. time complexity of the Floyd-Warshall algorithm for finding all-pairs shortest paths in a weighted graph with V vertices : O(V^3)
3. In dynamic programming, a problem must exhibit these properties to be solvable using dynamic programming techniques :
- Optimal Substructure
- Overlapping Subproblems
- Greedy Choice Property
4. Kruskal's Algorithm : uses the greedy strategy to find the minimum spanning tree of a graph 
5. Bottom-Up DP :
- the approach that is best suited for problems where we need to make a sequence of decisions, each depending on the previous decision and the current state 
- requires storing the solutions to subproblems in a table
- involves solving smaller instances of a problem and using the solutions to those smaller instances to solve larger instances
- Longest Increasing Subsequence is typically solved using bottom-up approach
6. The Bellman-Ford algorithm can be used to find the shortest path in a graph with: Both positive and negative edge weights
7. Minimum Spanning Tree : cant be solved using DP
8. Problem of backtracking : Travelling Salesman
9. algorithm used to find the shortest path in a weighted graph with positive edge weights : Dijkstra's Algorithm
10. algorithm used to find the shortest path in a weighted graph with negative edge weights :  Bellman-Ford Algorithm
11. Prim's Algorithm : uses a priority queue to greedily select the next vertex to include in the minimum spanning tree
12. Ford-Fulkerson Algorithm :
- used to find the maximum flow in a flow network 
- used to find the maximum bipartite matching in a bipartite graph
13. Characteristics of greedy :
- Optimal Substructure
- May produce suboptimal solutions
14. Topological Sorting : used to find the longest path in a directed acyclic graph (DAG)
15. Primary goal of DP : Minimize the time complexity
16. time complexity of the naive recursive approach for Fibonacci series calculation : O(2^n)
17. time complexity of the standard dynamic programming solution for the Knapsack problem : O(nW)
18. The longest increasing subsequence problem can be solved efficiently using dynamic programming in: O(n^2) time
19. Memoization : 
- uses a top-down approach and is more intuitive but may suffer from stack overflow for large inputs
- the time complexity is generally higher due to the recursion overhead
20. Backtracking :
- The process of constructing a solution to a problem from its subproblem solutions 
21. Tabulation :
- focuses on solving problems by combining solutions to subproblems, typically in a bottom-up manner


## HashMaps and Trie
1. Folding hashing : is used to map a large range of keys into a smaller range of hash values
- disadvantage : High probability of clustering
2. worst-case time complexity of inserting a key into a HashMap when dealing with collisions using chaining : O(1)
3. Linear probing : collision resolution technique that involves repeatedly probing until an empty slot is found
- disadvantage : may suffer from clustering, leading to degradation in poor cache performance
4. Trie is a data structure used for efficient storage and retrieval of : strings
5. sorting : not supported by trie
6. disadvantage of trie : High memory consumption
7. primary advantage of using Trie over Hashmap for storing strings : faster seacrh operations
8. common application of Trie data structure : spell checking 
9. Chaining : guarantees that every key will eventually be placed into the hash table without any infinite loops
- involves storing all colliding keys in a linked list
10. Double Hashing : requires the computation of multiple hash functions
11.  advantage of using Hashmap over Trie : Ability to handle large datasets efficiently


## Heap
1. Its a complete binary tree
2. array vs heap: Array has a fixed size, heap does not
3. element is inserted at the end of array in heap
4. Heapify Up: used to maintain the heap property after insertion
- Heapify Down : used to maintain the heap property after deletion
5. time complexity of building a heap from an array of n elements : O(n log n)
6. worst-case time complexity of heap sort: O(n log n)
7. Heap sort uses divide and conquer and stable sorting is not its benefit
8. Heap sort is preferred over Quick sort when: Worst-case performance is crucial
9. In a max-heap of n elements, what is the height of the heap? log n
10. space complexity of heap sort : O(1)
