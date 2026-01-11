// Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }

};


/* Should return true if linked list is circular, else false */
class Solution {
  public:
    bool isCircular(Node *head) {
        if(!head)
            return true;
            
        Node* curr = head;
        while( curr && curr->next != head) {
            curr = curr->next;
        }
        
        if(!curr)
            return false;
            
        return true;
    }
};
