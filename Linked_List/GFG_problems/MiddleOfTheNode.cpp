#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        this->data = x;
        this->next = nullptr;
    }
};

//Hare and Tortoise approach 
//The one written in book is iterative appraoch
int getMiddle(Node* head) {
    Node* fastptr = head;
    Node* slowptr = head;

    while(fastptr!= nullptr && fastptr->next != nullptr) {
        fastptr = fastptr->next->next;

        slowptr = slowptr->next;
    }

    return slowptr->data;
}

int main() {

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);

    cout << getMiddle(head) << endl;

    return 0;
}