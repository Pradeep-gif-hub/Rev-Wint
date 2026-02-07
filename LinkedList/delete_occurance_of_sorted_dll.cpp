class Solution{
public:
    Node* removeDuplicates(Node* head){
        if(head==NULL)return NULL;
        Node* curr=head;
        while(curr!=NULL && curr->next!=NULL){
            if(curr->data==curr->next->data){
                Node* del=curr->next;
                curr->next=del->next;
                if(del->next!=NULL)
                    del->next->prev=curr;
                delete del;
            }else{
                curr=curr->next;
            }
        }
        return head;
    }
};