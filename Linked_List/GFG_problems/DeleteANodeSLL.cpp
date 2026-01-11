#include <iostream>
using namespace std;

// Step 1: Define Node structure
struct Node {
    int data;
    Node* next;
};

// Step 2: Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Step 3: Function to delete a node by value
void deleteByValue(Node*& head, int key) {
    if (head == nullptr) return; // empty list

    // If head node contains the key
    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* prev = head;
    Node* curr = head->next;

    while (curr != nullptr && curr->data != key) {
        prev = curr;
        curr = curr->next;
    }

    if (curr == nullptr) return; // key not found

    prev->next = curr->next;
    delete curr;
}

// Step 4: Main function to test
int main() {
    // Create linked list manually: 10 -> 20 -> 30 -> 40
    Node* head = new Node{10, nullptr};
    Node* n2 = new Node{20, nullptr};
    Node* n3 = new Node{30, nullptr};
    Node* n4 = new Node{40, nullptr};

    head->next = n2;
    n2->next = n3;
    n3->next = n4;

    cout << "Original List: ";
    printList(head);

    // Delete a node
    int key;
    cout << "Enter value to delete: ";
    cin >> key;

    deleteByValue(head, key);

    cout << "Updated List: ";
    printList(head);

    // Free remaining nodes to avoid memory leaks
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
