#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node *next;
    Node(int v) {
        val = v;
        next = nullptr;
    }
};

bool cycleInLinkedList(Node *head) {
    if (!head || !head->next) return false;
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;
    }
    return false;
}


bool NOT_WORKING_cycleInLinkedList(Node *head) {
    if (!head || !head->next) return false;
    
    Node* detectNode = head;
    head = head->next;
    while(head != detectNode) {
        if(head->next == NULL){
            return false;
        }
        head = head->next;
    }
    return true;
}

int main() {
    // ✅ Linked list with cycle
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = b; // cycle back to node b

    if (cycleInLinkedList(a)) {
        cout << "Linked list has a cycle!" << endl;
    } else {
        cout << "Linked list does NOT have a cycle." << endl;
    }

    // ✅ Linked list without cycle
    Node* p = new Node(10);
    Node* q = new Node(20);
    Node* r = new Node(30);

    p->next = q;
    q->next = r;
    r->next = nullptr; // no cycle

    if (cycleInLinkedList(p)) {
        cout << "Linked list has a cycle!" << endl;
    } else {
        cout << "Linked list does NOT have a cycle." << endl;
    }

    return 0;
}





