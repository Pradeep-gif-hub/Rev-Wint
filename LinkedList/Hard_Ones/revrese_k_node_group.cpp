class Solution{
private:
    ListNode* reverse(ListNode* head){
        ListNode* prev=nullptr;
        while(head!=nullptr){
            ListNode* next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }

    ListNode* getKthNode(ListNode* head,int k){
        while(head!=nullptr&&k>1){
            head=head->next;
            k--;
        }
        return head;
    }

public:
    ListNode* reverseKGroup(ListNode* head,int k){
        if(head==nullptr||k==1) return head;
        ListNode dummy(0);
        dummy.next=head;
        ListNode* prevGroup=&dummy;
        while(true){
            ListNode* kth=getKthNode(prevGroup->next,k);
            if(kth==nullptr) break;
            ListNode* nextGroup=kth->next;
            kth->next=nullptr;
            ListNode* currHead=prevGroup->next;
            prevGroup->next=reverse(currHead);
            currHead->next=nextGroup;
            prevGroup=currHead;
        }
        return dummy.next;
    }
};
