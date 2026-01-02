//Insertion at the Tail in Doubly Linked List
#include <iostream>
#include <vector>
using namespace std;

class Node {
    public:
    //It consist of data
    int data;
    Node* next; // Pointer to next node
    Node* prev; // Pointer to prev node

    //Constructer is created 
    Node(int data1,Node*next,Node*prev) {
        this->data = data1;
        this->next = next;
        this->prev = prev; 
    }

    //Constructor with only Data
    Node(int data1) {
        this->data = data1;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

Node* ConvertArr2DLL(vector<int> arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;
    
    for (int i=1; i<arr.size();i++) {
        Node* temp = new Node(arr[i],nullptr,prev);

        //Prev is now poiting to next node prev
        prev->next = temp;
        prev = temp;
    }
    return head;

}

Node* DeleteLastNode(Node* head) {
    Node* tail = head;
    while(tail->next->next != nullptr) {
        tail = tail->next;
    }
    
    tail->next = tail->next->next;
    
    return head;
}

Node* InsertionAtTail(Node* head, int data) {
    //Create a new Node first

    Node* newNode = new Node(data);

    if ( head == nullptr) {
        head == newNode;
    }
    //Traversing to the last node of DLL
    Node* tail = head;
    while(tail->next != nullptr) {
        tail = tail->next;
    }

    //idahr aayenga jab uske tail->next = Null
    tail->next = newNode;
    tail->prev = tail;
    return head;
    

}



void printDll(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout <<endl;
};


int main() {
    vector<int> arr = {20,21,12,11,12};
    Node* head = ConvertArr2DLL(arr);

    // Normal linked list;
    printDll(head);
    int y = 55;

    InsertionAtTail(head,55);
    cout << "After insertion at Tail" <<endl;
    printDll(head);

    cout << "After Deletion of tail" <<endl;
    DeleteLastNode(head);
    printDll(head);
}