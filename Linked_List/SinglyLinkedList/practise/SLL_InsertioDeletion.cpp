#include <iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this->data =data;
        this->next = nullptr;
    }

    Node(int data1, Node* next) {
        this->data = data1;
        this->next = next;
    }
};

Node* vector2LL(vector <int> arr) {
    Node* head = new Node{arr[0]};
    Node* curr = head;

    for (int i=1;i<arr.size(); i++) {
        curr->next = new Node(arr[i]);
        curr = curr->next;
    }
    return head;
};

Node* InsertionAtHead(Node* head, int value) {
    if (head == nullptr) {
        head = new Node(value);
        return head;
    }

    Node* newFirst = new Node(value);
    newFirst->next = head;

    return newFirst;
}

void printLL(Node* head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data;
        temp = temp->next;
    }
    cout <<endl;
}


int main() {
    vector<int> arr = {1,2,3,4};
    //before insetion
    Node* head = vector2LL(arr);

    Node* temp = head;
    printLL(head);

    Node* head2 = nullptr;
    int valueToBeInserted = 45;
    Node* updatedHead = InsertionAtHead(head2, valueToBeInserted);
    
    printLL(updatedHead);


}