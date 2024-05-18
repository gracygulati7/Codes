# TREES

-> data is stored in heirachical order in trees that is there are levels in it <br>
-> whereas in othere data structures studied previously data is stored linearly (in queues,staks,linked list,arrays,vectors etc) <br>
-> jo data level ki form mein represent hota hai usse tree mein store krte hai <br>
-> starts from root then branch, then leaf (end node) <br>

ROOT: first level of tree (first node)

BRANCH: Node connecting Lines

LEAF: Last node of tree

## BINARY TREE:

Every node has at max 2 children .

**Properties of binary tree:**

-> Maximum nodes at level 'L' = 2<sup>L</sup>

-> Maximum nodes in a tree of height H is 2<sup>H</sup>-1   (height is total levels in tree)

-> For N nodes, minimum possible height or minimum number of levels are log<sub>2</sub>(N+1).

-> A binary tree with L leaves has at least log<sub>2</sub>(N+1)+1 number of levels


### BINARY TREE TRAVERSALS-

-> there are 3 types of traversal :
- pre order
- post order
- in order 

## Preorder traversal:

1. root ki value likho
2. then uske left subtree pe jao (means left child pe jao and usse nikalne vle baki sare nodes)
3. after traversal of whole left subtree then return to root 
4. then traverse whole right subtree


## Inorder traversal:

1. root ki value ko mt likho just start from left subtree of root
2. then write root value
3. then traverse whole right subtree of root


## Postorder Traversal:

1. agr aap kisi root pr hai to uss root pe phle poore left subtree ko travel kr lijiye 
2. then uske poore right subtree ko travel kr lijiye
3. and then finally root ki value likh lijiye.


## BUILD TREE FROM INORDER AND PREORDER TRAVERSAL:

**ALGORITHM:**
1. pick element from preorder & create a node
2. increment preorder index
3. search for picked element position (pos) in inorder
4. call to build left subtree from inorder 0 to pos-1
5. call to build right subtree from inorder pos+1 to n   (n:total number of nodes)
6. return the node


## BUILD TREE FROM INORDER AND POSTRDER TRAVERSAL:
(postorder= left->right->root ; inorder= left->root->right)

**ALGORITHM:**
1. start from end of postorder and pick an element to create a node
2. decrement postorder index
3. search for picked element position (pos) in inorder
4. call to build right subtree from inorder's pos+1 to n
5. call to build left subtree from inorder 0 to pos-1
6. return the node

## LEVEL ORDER TRAVERSAL:
