class Solution {
  public:
    int cycleStart(Node* head) {
        if(head==NULL) return -1;
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)break;
        }
        if(fast==NULL || fast->next==NULL){
            return -1;
        }
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow->data;
    }
};
//OR 
class Solution {
  public:
    int cycleStart(Node* head) {
        if(head==NULL) return -1;
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                slow=head;
                while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow->data;
            }  
        }
        return -1;
      }
};