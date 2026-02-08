class Solution {
  private:
    Node* kthNode(Node* head,int k){
        int cnt=1;
        Node* temp=head;
        while(temp!=NULL){
            if(cnt==k) return temp;
            cnt+=1;
            temp=temp->next;
        }
        return NULL;
    }
  public:
    Node* rotate(Node* head, int k) {
        if(head==NULL||head->next==NULL||k==0) return head;
        int len=1;
        Node* tail=head;
        while(tail->next!=NULL){
            tail=tail->next;
            len+=1;
        }
        k=k%len;
        if(k==0) return head;
        tail->next=head;
        Node* newTail=kthNode(head,k);
        head=newTail->next;
        newTail->next=NULL;
        
        return head;
        
    }
};