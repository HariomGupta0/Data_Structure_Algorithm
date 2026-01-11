#include <iostream>
#include <vector>
using namespace std;

//Singly  Linked List 
// Creation of the Node
class Node {
    public:
    int data = data;
    Node* next = next;

    //Constructor is called(with only int data);
    Node(int data1){
        this->data = data1;
        this->next = nullptr;
    }

    //Constructor with int data and and next pointer;
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

int main() {

    // 3 Ways to Create a SLL 
    // 1.Simplest way
    Node* head = new Node(12);
    head->next = new Node(15);
    head->next->next = new Node(16);

    // 2. Using 2nd Constructor that pointer method 
    Node* thirdNode = new Node(3,nullptr); //tail
    Node* secondNode = new Node(2,thirdNode);
    Node* firstNode = new Node(1,secondNode);
    Node* newHead = firstNode;  //head

    // 3.with Means of array
    vector<int> arr = {1,2,3,4};
    // then using the 2. way instead of puting [int data] we put [arrr[i]];

    // 4.Functional Approach arr is passed to a function (and it returns a singly or Doubly Linked List)
    Node* newNewHead = vector2LL(arr);
    cout << "Loopstarts" <<endl ;
    while( newNewHead != nullptr) {
        cout << newNewHead->data << " ";
        // cout<< "Loop is running" << endl;
        newNewHead = newNewHead->next;

        // cout << "head value updated" <<endl;
    }
    cout << "LoopEnds" <<endl;
}