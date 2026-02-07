// Tortose adn Hare Algorithm


class Solution {
  public:
    bool detectLoop(Node* head) {
      Node* slow=head;
      Node* fast=head;
      while(fast!=NULL && fast->next!=NULL){
          slow=slow->next;
          fast=fast->next->next;
          if(slow==fast) return true;
      }
      return false;
    }
};