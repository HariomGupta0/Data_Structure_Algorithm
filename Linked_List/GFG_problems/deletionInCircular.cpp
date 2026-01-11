#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};



int main() {
    // Create nodes
    Node* head = new Node{10, nullptr};
    Node* second = new Node{20, nullptr};
    Node* third = new Node{30, nullptr};

    // Make it circular
    head->next = second;
    second->next = third;
    third->next = head;

    // Display circular linked list
    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(head)" << endl;

    return 0;
}
