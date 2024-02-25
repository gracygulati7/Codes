# Linked List
its a linear type of data structure <br>
its elements are connected by a chain/link to the next element <br>
single element in a list is called a node <br>
when we connect nodes by a link, then that is every node in a linked list has two parts-  <br>
first part is the data it stores which can be any data like int,string,bool,float etc. <br>
second part is a next (pointer) to the next node in the list. (address of next node) <br>
head pointer stores the address of first node in the list so by this we can figure out from where our list gets started. <br>
the link is stopped by a NULL pointer (or a null value) <br>
the last node's next field will store null indicating the end of linked list. <br>
tail node is last valid node which contains some before. its usually before null node. <br>
![](linked_list_structure.png)

array is single block of memory with partitions whereas linked list is multiple block of memory linked to each other. <br> <br>
![](linkedlist.png)
limitations of array: <br>
-> fixed size <br>
-> contiguous block of memory <br>
-> inserting/deleting is costly <br>

properties of linked list: <br>
-> size can be modified <br>
-> non-contiguous memory <br>
-> insertions/deletions at any point is easier <br>
