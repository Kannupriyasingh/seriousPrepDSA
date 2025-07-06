// In a linked list–based stack
// We usually design the stack so that:

// The top of the stack is the head of the linked list.

// New elements are added and removed at the head.

// So the structure looks like:

// top → [30] → [20] → [10] → NULL

// The top pointer points to the node containing 30 → the last value pushed.

// pop() just removes this head node.

// push() adds a new node before the current head.

// This makes push and pop O(1) (constant time) because we never need to traverse the list.


#include <iostream>
using namespace std;

class StackNode {
public:
    int val;
    StackNode *next;

    StackNode(int x) : val(x), next(NULL) {}
};

class MyStack {
private:
    StackNode *top;

public:
    MyStack() {
        top = NULL;
    }

    void push(int x) {
        StackNode *newNode = new StackNode(x);
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (top == NULL) {
            cout << "Stack Underflow!" << endl;
            return -1; // or throw exception
        }
        int poppedVal = top->val;
        StackNode *temp = top;
        top = top->next;
        delete temp;
        return poppedVal;
    }

    int peek() {
        if (top == NULL) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return top->val;
    }

    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    MyStack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;

    cout << "Top element now: " << s.peek() << endl;

    return 0;
}
