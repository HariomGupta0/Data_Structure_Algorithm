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

//Iterative Approach
int ILengthLL(Node* head) {
    Node* curr = head;
    int count = 0;
    while(curr != nullptr) {
        count ++;
        curr =  curr->next;
    }
    return count;


}


//Recursive Approach
int Rlength(Node* head) {
    if (head == NULL) {
        return 0 ;
    }

    return 1 + Rlength(head->next);
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

    int sizeofLL = Rlength(head);
    cout << "Count of the LL :" <<sizeofLL;
    // printDLL(head);

}