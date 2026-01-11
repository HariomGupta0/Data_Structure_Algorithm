#include <iostream>
#include <vector>
using namespace std;

class Node{

    //Final Declaration 
    public:
    int data = data;
    Node* prev = prev;
    Node* next = next;

    Node(int data1) {
        this->data = data1;
        this->prev = nullptr;
        this->next = nullptr;
    }

    Node(int data1, Node* prev, Node* next) {
        this->data = data1;
        this->prev = prev;
        this->next = next;
    }   

};

Node* Vector2dll(vector<int> arr) {
    Node* head = new Node(arr[1]);
    for (int i=1; i<arr.size(); i++) {
        Node* curr = new Node(arr[i],head,nullptr);
    }
    return head;
}

int main( ) {
    vector<int> arr1 = {10,20,30,40,50,60,};

    Node* head = Vector2dll(arr1);
    Node* temp = head;

    while (temp->next!= nullptr) {
        cout << temp->data;
        temp = temp->next;
    }
    


}