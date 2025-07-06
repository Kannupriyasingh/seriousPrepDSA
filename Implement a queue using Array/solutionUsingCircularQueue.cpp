#include <iostream>
using namespace std;

class CircularQueue {
private:
    int *arr;
    int size;
    int front, rear;

public:
    // Constructor
    CircularQueue(int capacity) {
        size = capacity;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Destructor
    ~CircularQueue() {
        delete[] arr;
    }

    // Enqueue / push
    void push(int x) {
        if ((rear + 1) % size == front) {
            cout << "Queue Overflow" << endl;
            return;
        }

        if (front == -1) {
            // First element
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = x;
    }

    // Dequeue / pop
    int pop() {
        if (front == -1) {
            cout << "Queue Underflow" << endl;
            return -1;
        }

        int poppedVal = arr[front];

        if (front == rear) {
            // Only one element was present
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }

        return poppedVal;
    }

    // Optional: peek front element
    int peek() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    // Optional: check if empty
    bool isEmpty() {
        return front == -1;
    }

    // Optional: check if full
    bool isFull() {
        return (rear + 1) % size == front;
    }
};

int main() {
    CircularQueue q(5); // capacity 5

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Popped: " << q.pop() << endl;  // 10
    cout << "Popped: " << q.pop() << endl;  // 20

    q.push(50);
    q.push(60);
    q.push(70); // should show overflow because size is 5

    while (!q.isEmpty()) {
        cout << "Popped: " << q.pop() << endl;
    }

    cout << "Popped: " << q.pop() << endl; // Underflow

    return 0;
}
