#include <iostream>
#include <vector>
using namespace std;

class Node {
    public:
    int data = data;
    Node* next = next;

    Node(int data1) {
        this->data = data1;
        this->next = nullptr;
    }

    Node(int data1, Node* next1) {
        this->data = data1;
        this->next = next1;
    }
};

class Solution {
    public:
    Node* InsertionAtHead(int value,Node* head) {
        Node* newNode = new Node(value,head);
        return newNode;
        
    }


    Node* printDLL(Node* head) {
        Node* temp = head;
        while(temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }   
        cout << endl;
    }
};

int main() {
    vector<int> arr = {2,11,33,54,13};
    Node* third = new Node(arr[2], nullptr);
    Node* second = new Node(arr[1],third);
    Node* first = new Node(arr[0],second);
    Node* head = first;


    Solution sol;
    sol.printDLL(head);

    int value = 5;
    Node* newHead = sol.InsertionAtHead(value,head);
    sol.printDLL(newHead);



}