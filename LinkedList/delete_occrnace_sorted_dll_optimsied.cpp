class Solution {
  public:
    Node *removeDuplicates(struct Node *head) {
        Node* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            Node* newNode=temp->next;
            while(newNode!=NULL && newNode->data==temp->data){
                Node* duplicate=newNode;
                newNode=newNode->next;
                free(duplicate);
            }
            temp->next=newNode;
            if(newNode!=NULL) newNode->prev=temp;
            temp=temp->next;
        }
        return head;
    }
};