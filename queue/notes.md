# Queue
- fifo principle
- insertion at one end and removal at other end only
- here we make use of two pointers : front and back <br>
4 operations: 
1. enqueue(x) : insertion at back (push)
2. dequeue() : removal at front (pop)
3. peek() : gives us the element at the front
4. empty() : tells if queue is empty or not

## steps:
1. enqueue(x) :
- initially, front and back pointers are at the start initialised by -1 respectively <br>
- then when we start inserting the values in queue, back pointer is incremented by 1 each time an element gets inserted in queue <br>
- and front pointer is incremented by 1 only when first element is added in queue and afterwards when more elements get inserted only back is incremented and front stays at the fisrt element only and back will keep track the latest/last element inserted in the queue <br>

2. dequeue() :
- in this we only need to increment the front pointer as we need to remove an element and elements can only get removed via the front pointer

3. peek() :
- it will tell us which value is currentl present at the front or the start of the queue

4. empty() :
- it will tell us whether our queue is empty or not
- when front=back means we still have 1 element left in queue
- but when we dequeue that also and front=back+1 then this means that our queue is not empty ie, when front>back or when front=-1 then we can say that the queue is empty
