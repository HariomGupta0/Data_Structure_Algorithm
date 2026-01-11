
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        prev = next = nullptr;
    }
};

void forwardTraversal(Node* head) {
    if (head == NULL) {
        return;
    }
    cout << head->data << " ";

    forwardTraversal(head->next);
}

int main() {
  
    // Create a hardcoded doubly linked list:
  	// 1 <-> 2 <-> 3
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    cout << "Forward Traversal: ";
    forwardTraversal(head);

    return 0;
}