/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        if(head==nullptr || k<=0) return -1;
        Node* fast=head;
        Node* slow=head;
        for (int i=0; i<k;i++) {
            if (fast==NULL) return -1; 
            fast=fast->next;
        }
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        return slow->data;
    }
};
// using the fast and slow pointer approach 