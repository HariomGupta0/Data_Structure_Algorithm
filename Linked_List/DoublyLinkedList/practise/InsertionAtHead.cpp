#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next, *prev;

    Node( int data1) {
        data = data1;
        next = prev = nullptr;
    }
};

Node* InsertAthead(Node* head, int value) {
    Node* temp = new Node(value);
    temp->next = head;

    if(head != nullptr) {
        head->prev = temp;
    }

    return temp;
}

void printDLL(Node* head) {

    Node* curr = head;
    while(curr  != nullptr) {
        cout << curr->data;

        if(curr->next != nullptr) {
            cout << "<->";
        }
        curr = curr->next;

    }
    cout << endl;
}



int main() {
    Node* head = new Node(01);
    head->next = new Node(2);
    head->next->prev = head;

    printDLL(head);

    int value = 34;
    head = InsertAthead(head,value);
    printDLL(head);

}