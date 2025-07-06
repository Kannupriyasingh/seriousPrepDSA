// This implementation will work fine as a one-directional queue, but if you keep pushing and popping, front and rear keep increasing forever.
// This is fine for small tests, but ideally you should use a circular queue.

#include <iostream>
using namespace std;

class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public:
    MyQueue() {
        front = 0;
        rear = 0;
    }

    void push(int x) {
        arr[rear] = x;
        rear++;
    }

    int pop() {
        if (front == rear) {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        int poppedVal = arr[front];
        arr[front] = -1; // optional: not needed functionally
        front++;
        return poppedVal;
    }
};

int main() {
    MyQueue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Popped: " << q.pop() << endl; // 10
    cout << "Popped: " << q.pop() << endl; // 20

    q.push(40);

    cout << "Popped: " << q.pop() << endl; // 30
    cout << "Popped: " << q.pop() << endl; // 40
    cout << "Popped: " << q.pop() << endl; // -1 and Underflow

    return 0;
}
