class Solution{
public:
    void deleteAllOccurOfX(Node** head_ref,int x){
        if(*head_ref==NULL)return;
        Node* curr=*head_ref;
        while(curr!=NULL){
            if(curr->data==x){
                Node* del=curr;
                curr=curr->next;
                if(del==*head_ref){
                    *head_ref=del->next;
                    if(*head_ref!=NULL)(*head_ref)->prev=NULL;
                }else{
                    del->prev->next=del->next;
                    if(del->next!=NULL)del->next->prev=del->prev;
                }
                delete del;
            }else{
                curr=curr->next;
            }
        }
    }
};