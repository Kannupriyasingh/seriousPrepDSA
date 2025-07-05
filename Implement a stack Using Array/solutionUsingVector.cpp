// Dynamic Storage

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> s;

    // Push elements
    s.push_back(10);
    s.push_back(20);
    s.push_back(30);

    // Pop and print the top element
    cout << s.back() << " popped from stack\n";
    s.pop_back();

    // Peek at the top element
    cout << "Top element is: " << s.back() << endl;

    // Print all elements in the stack
    cout << "Elements present in stack: ";
    while (!s.empty()) {
        cout << s.back() << " ";
        s.pop_back();
    }

    return 0;
}
