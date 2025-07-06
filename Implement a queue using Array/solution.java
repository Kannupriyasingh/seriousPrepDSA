// Node of the queue
class QueueNode {
    int data;
    QueueNode next;

    QueueNode(int a) {
        data = a;
        next = null;
    }
}

class MyQueue {
    QueueNode front, rear;

    MyQueue() {
        front = rear = null;
    }

    // Function to push an element into the queue
    void push(int a) {
        QueueNode newNode = new QueueNode(a);
        if (rear == null) {
            // Queue is empty
            front = rear = newNode;
        } else {
            rear.next = newNode;
            rear = newNode;
        }
    }

    // Function to pop front element from the queue
    int pop() {
        if (front == null) {
            System.out.println("Queue underflow");
            return -1;
        }
        int poppedVal = front.data;
        front = front.next;
        if (front == null) {
            rear = null;
        }
        return poppedVal;
    }
}
