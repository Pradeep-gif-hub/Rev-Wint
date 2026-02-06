/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
       if(head==NULL || head->next==NULL) return head;
       Node* newHead=reverseList(head->next);
       Node* front=head->next;
       front->next=head;
       head->next=nullptr;
       return newHead;
     
    }
};