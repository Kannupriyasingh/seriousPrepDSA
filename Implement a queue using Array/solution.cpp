#include <iostream>
using namespace std;

// Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

// Structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;

    MyQueue() { front = rear = NULL; }

    // Function to push an element into the queue.
    void push(int x)
    {
        QueueNode *newNode = new QueueNode(x);
        if (rear == NULL) {
            // Queue is empty
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Function to pop front element from the queue.
    int pop()
    {
        if (front == NULL) {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        QueueNode *frontNode = front;
        int poppedVal = front->data;
        front = front->next;
        if (front == NULL) {
            rear = NULL;
        }
        delete frontNode;
        return poppedVal;
    }
};

int main() {
    MyQueue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Popped: " << q.pop() << endl;  // Should print 10
    cout << "Popped: " << q.pop() << endl;  // Should print 20

    q.push(40);

    cout << "Popped: " << q.pop() << endl;  // Should print 30
    cout << "Popped: " << q.pop() << endl;  // Should print 40

    cout << "Popped: " << q.pop() << endl;  // Should print -1 and Queue Underflow

    return 0;
}
