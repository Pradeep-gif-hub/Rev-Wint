/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* removeLastNode(Node* head) {
        if(head==nullptr || head->next==nullptr) return nullptr;
        Node* temp=head;
        while(temp->next->next!=nullptr){
            temp=temp->next;
        }
        free(temp->next);
        // delete temp->next;
        temp->next=nullptr;
        return head;
        
    }
};