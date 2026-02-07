class Solution {
  public:
    Node* deleteMid(Node* head) {
        if(head==NULL || head->next==NULL) return NULL;
        Node* slow=head;
        Node* fast=head;
        fast=fast->next->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=slow->next->next;
        return head;
        
    }
};