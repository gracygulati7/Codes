//! Array implementation of Queue

#include<bits/stdc++.h>
# define n 20
using namespace std;
class Queue{
    int *arr;
    int front;
    int back;

    public:
    Queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x){
        // if queue is full
        if(back==n-1){
            cout<<"Queue Overflow"<<endl;
            return; 
        }
        back++; // if queue isnt full then increment back
        arr[back] = x; // and insert the element at back

        // if the element to be inserted is first element of queue means before this queue was empty then increment first so that it keeps track of the first element
        if(front==-1){
            front++;
        }
    }

    void pop(){
        // if queue is empty
        if(front==-1 || front>back){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        front++; // if queue isnt empty then increment front
    }

    int peek(){
        // if queue is empty
        if(front==-1 || front>back){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front]; // if queue isnt empty then print the first element of queue
    }

    bool empty(){
        // if queue is empty
        if(front==-1 || front>back){
            return true;
        }
        return false;
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;
    return 0;
}