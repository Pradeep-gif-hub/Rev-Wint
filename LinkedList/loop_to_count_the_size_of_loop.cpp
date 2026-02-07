class Solution{
public:
    int lengthOfLoop(Node* head){
        if(!head)return 0;
        Node* slow=head;
        Node* fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)break;
        }
        if(!fast||!fast->next)return 0;
        int count=1;
        fast=fast->next;
        while(fast!=slow){
            count++;
            fast=fast->next;
        }
        return count;
    }
};