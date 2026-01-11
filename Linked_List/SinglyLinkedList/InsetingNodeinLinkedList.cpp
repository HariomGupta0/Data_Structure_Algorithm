#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1 ){
        data = data1;
        next = next1;
    }

    Node(int data) {
        this -> data = data;
        this -> next = nullptr;
    }
};

class Solution {
    public:
    Node* insertathead(Node* head,int newData) {
        Node* newNode = new Node(newData,head);
        return newNode;
    }

    //If their is 1 or 2 node
    Node* DeleteTheNode(Node* head) {
        if( head == NULL || head->next == NULL) {
            delete head;

            return NULL;
        }

        Node* curr = head;
        while(curr->next->next != NULL) {
            curr = curr->next;
        }

        curr->next = curr->next->next;
        return head;
    }




    void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

};

int main() {
    Solution sol;
    // Node* head = new Node(10);
    // head->next = new Node(20);
    // head->next->next = new Node(30);

    Node* fourth = new Node(30, nullptr);
    Node* third = new Node(10, fourth);
    Node* second = new Node(20,third);
    Node* first = new Node(10,second);
    Node* y = first;
    cout << "Oldnode ";
    sol.printList(y);
    
    sol.DeleteTheNode(y);
    // head = sol.insertathead(head,5);
    cout << "After deleting the tail ";
    sol.printList(y);

    return 0;
};