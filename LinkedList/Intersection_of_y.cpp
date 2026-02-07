class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
       Node* temp1=head1;
       Node* temp2=head2;
       if(head1==NULL || head2==NULL) return NULL;
       while(temp1!=temp2){
           temp1=temp1->next;
           temp2=temp2->next;
           if(temp1==temp2) return temp1;
           if(temp1==NULL) temp1=head2;
           if(temp2==NULL) temp2=head1;
       }
       return NULL;
    }
};