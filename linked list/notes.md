# Linked List
its a linear dynamic type of data structure <br>
its elements are connected by a chain/link to the next element <br>
single element in a list is called a *node/listnode* <br>
when we connect nodes by a link, then that is every node in a linked list has two parts-  <br>
*first part* is the data it stores which can be any data like int,string,bool,float etc. <br>
*second part* is a next (pointer) to the next node in the list. (address of next node) <br>
*head pointer* stores the address of first node in the list so by this we can figure out from where our list gets started. <br>
the link is stopped by a NULL pointer (or a null value) <br>
the last node's next field will store null indicating the end of linked list. <br>
tail is a pointer of node type which will always represent the last node of the list <br>
*tail node* is last valid node which contains some value before. its usually before *null pointer*.<br>

this is singly linked list: <br>
![](linked_list_structure.png) <br> <br>
![](linkedlist.png) <br>
array is single block of memory with partitions whereas linked list is multiple block of memory linked to each other. <br>

limitations of array: <br>
-> fixed size <br>
-> contiguous block of memory <br>
-> inserting/deleting is costly <br>

properties of linked list: <br>
-> dynamic size <br>
-> size can be modified <br>
-> non-contiguous memory <br>
-> insertions/deletions at any point is easier <br>

types of linked list: <br>
-> singly linked list - every node points to its successor node <br> 
- in this we can only move forward <br>
-> doubly linked list - every node is connected to its previous and next node <br> 
- in this we can only move in both directions ie forward or backward <br>
-> circular linked list - last node will point to head node ie `while(temp->next!=head)` <br>
and it will have the same structure as that of singly linked list <br>
but to display all node values of circular linked list we will use do while loop and condition will be while `temp!=head` <br>