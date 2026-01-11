#include <iostream>
#include <stack>
#include <vector>
using  namespace std;


// Class representing a Node in a doubly linked list
class Node {
    public:
    int data = data;
    Node* next = next;
    Node* prev = prev;


    Node(int data1, Node*next, Node*prev) {
        this->data = data1;
        this->next = next;
        this->prev = prev;
    }

    Node(int data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

// Function to convert a vector into a doubly linked list
Node* Vector2DLL(vector<int> arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i=1;i<arr.size();i++) {
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;


}

// Function to print elements of a doubly linked list
void printDLL(Node* head) {
    while(head!= nullptr) {
        cout << head->data;
        head = head->next;
    }
    cout <<endl;
};



Node* reversetheDll(Node* head) {
    if (head == NULL  || head->next == NULL) {
        return head;
    }

    Node* curr = head;
    while(curr != nullptr) {
        
        //temp variable being made just to traverse
        Node* temp = curr->next;
        curr->next = curr->prev;
        curr->prev = temp;

        head = curr;
        curr = temp;
    }

    return head;

}
// Function to reverse a doubly linked list using a stack (brute force)
Node* reverseDLL(Node* head) {
    stack<int> st;

    Node* temp = head;
    while(temp != nullptr ) {
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while (temp != nullptr) {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}





int main() {
    vector<int> arr = {1,2,3,4,5};
    Node* example = Vector2DLL(arr);
    
    printDLL(example);

    example = reversetheDll(example);
    printDLL(example);

}