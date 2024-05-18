# MAPS

## Containers- 
-> A container is a holder object that stores a collection of other objects (its elements) <br>

**Types of containers:** <br>
1. Sequence containers: <br>
Sequence containers implement data structures that can be accessed sequentially.  <br>
Sequence containers are a type of data structure in programming that store elements in a specific order, like a list. <br>
They're like containers (imagine boxes) that hold things (elements) in a particular sequence, meaning each element has a position or index. <br>
You can think of them as different types of boxes, each with its own way of organizing and accessing the stuff inside. <br>
- array: Static contiguous array (class template) <br>
- vector: Dynamic contiguous array (class template) <br>
- deque: Double-ended queue (class template) <br>
- forward_list: Singly-linked list (class template) <br>
- list: Doubly-linked list (class template) <br>

2. Associative containers: <br>
Associative containers implement sorted data structures that can be quickly searched (O(log n) complexity). <br> 
Associative containers are another type of data structure in programming, but they organize data differently than sequence containers. <br> 
Instead of arranging elements in a specific order, like a sequence, they organize data in key-value pairs.<br> 
Imagine a phone book: you have names (keys) associated with phone numbers (values). <br>
- Set: Collection of unique keys, sorted by keys 
(class template) <br>
- Map: Collection of key-value pairs, sorted by keys, keys are unique (class template). <br>
- multiset: Collection of keys, sorted by keys (class template) <br>
- multimap: Collection of key-value pairs, sorted by keys (class template) <br>

## MAPS:
Maps are associative containers that store elements in a mapped fashion. <br>
Each element has a key value and a mapped value. <br> 
No two mapped values can have the same key values. <br>

`std::map` is the class template for map containers and it is defined inside the `<map>` header file.

*Basic std::map Member Functions:*

- begin() – Returns an iterator to the first element in the map. <br>
- end() – Returns an iterator to the theoretical element that follows the last element in the map. <br>
- size() – Returns the number of elements in the map. <br>
- max_size() – Returns the maximum number of elements that the map can hold. <br>
- empty() – Returns whether the map is empty. <br>
- pair insert(keyvalue, mapvalue) – Adds a new element to the map. <br>
- erase(iterator position) – Removes the element at the position pointed by the iterator. <br>
- erase(const g)– Removes the key-value ‘g’ from the map. <br>
- clear() – Removes all the elements from the map. <br>

-> iterators are used to traverse the map just like we use a temp pointer to traverse the linked list. <br>

## Iterators-
An iterator is an object (like a pointer) that points to an element inside the container.<br> 
We can use iterators to move through the contents of the container. <br>
They can be visualized as something similar to a pointer pointing to some location and we can access the content at that particular location using them. <br>

Most powerful iterator -> pointer <br>

Depending upon the functionality of iterators they can be classified into five categories, as shown in the diagram below with the outer one being the most powerful one and consequently the inner one is the least powerful in terms of functionality. <br>

![Iterator Functionality](https://media.geeksforgeeks.org/wp-content/uploads/C_Iterator.jpg) <br>

like vectors support Random-access iterators, while lists support bidirectional iterators. The whole list is as given below: <br>

![Iterators](https://media.geeksforgeeks.org/wp-content/uploads/C_Iterator_Support.jpg) <br>

Types of Iterator:

- Input Iterators: They are the weakest of all the iterators and have very limited functionality. They can only be used in a single-pass algorithms, i.e., those algorithms which process the container sequentially, such that no element is accessed more than once.
- Output Iterators: Just like input iterators, they are also very limited in their functionality and can only be used in single-pass algorithm, but not for accessing elements, but for being assigned elements.
- Forward Iterator: They are higher in the hierarchy than input and output iterators, and contain all the features present in these two iterators. But, as the name suggests, they also can only move in a forward direction and that too one step at a time.
- Bidirectional Iterators: They have all the features of forward iterators along with the fact that they overcome the drawback of forward iterators, as they can move in both the directions, that is why their name is bidirectional.
- Random-Access Iterators: They are the most powerful iterators. They are not limited to moving sequentially, as their name suggests, they can randomly access any element inside the container. They are the ones whose functionality are same as pointers.

## NOTE

In C++, std::map organizes its elements based on their keys, not the order of insertion. When you iterate over a std::map, it presents elements in sorted order according to their keys. So, even if you inserted elements in a specific order, the map rearranges them based on the keys. <br>

