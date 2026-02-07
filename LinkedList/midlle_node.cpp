class Solution {
  public:
    int getMiddle(Node* head) {
        if(!head) return NULL;
        int size=0;
        Node* temp=head;
        while(temp!=nullptr){
            size+=1;
            temp=temp->next;
        }
        int middle=(size/2);
        temp=head;
        while(middle--){
            temp=temp->next;
        }
        return temp->data;
    }
};