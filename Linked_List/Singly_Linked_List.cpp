#include <iostream>
#include <vector>
using namespace std;

//Creation of Node class
class Node {
    public:
    int data;
    Node* next;  //Pointer to next node

    //Constructor with Data and Next
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    //Constructor with data only
    Node(int data) {
        this ->data = data;
        this ->next = nullptr;
    }
};

int main() {
    // Create an array
    vector<int> arr = {2, 5, 8, 7};

    // Create first node
    //  Node* y = new Node(arr[0]);

    // y->next = new Node (arr[2]);
    // y->next->next = new Node(arr[3]);

    //  while (y != nullptr) {
    //     cout << y->data << " ";
    //     y = y->next;
    // }

    Node* third  = new Node(arr[3], nullptr);   // 7
    Node* second = new Node(arr[2], third);     // 8 -> 7
    Node* first  = new Node(arr[1], second);    // 5 -> 8 -> 7
    Node* y = first;                            // head

    Node* temp = y;
    while (temp!= nullptr) {
        cout <<temp->data << " ";
        temp = temp->next;
    }
    

    return 0;
}
    