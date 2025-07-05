#include<bits/stdc++.h>
using namespace std;

class Stack{
    int *arr;
    int topIndex;
    int capacity;
    
public:
    // Constructor
    Stack(int capacity) {
        this->capacity = capacity;
        topIndex = -1;
        arr = new int[capacity];
    }
    
     // Destructor
    ~Stack() {
        delete[] arr;
    }
    
    bool push(int x) {
        if(topIndex >= capacity-1) {
            cout << "Stack Overflow";
            return false;
        }
        arr[++topIndex] = x;
        return true;
    }
    
    int pop() {
        if(topIndex < 0) {
            cout << "Stack underflow";
            return false;
        }
        return arr[topIndex--];
    }
    
    int peep() {
        if(topIndex < 0) {
            cout << "Stack is Empty";
            return 0;
        }
        return arr[topIndex];
    }
    
    bool isEmpty() {
        return topIndex < 0;
    }
};

int main() {
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.pop() << " popped from stack";
    
    cout << "Top Element is " << s.peep() << endl;
    
    cout << "Elements present in stack: ";
    
    while(!s.isEmpty()) {
        cout << s.peep() << " ";
        s.pop();
    }
    return 0;
}
