class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        if(head1==NULL && head2==NULL) return NULL;
        if(head1==NULL){
            return head2;
        }
        if(head2==NULL){
            return head1;
        }
       Node* temp1=head1;
       Node* temp2=head2;
       vector<int>ans;
       while(temp1!=NULL){
           ans.push_back(temp1->data);
           temp1=temp1->next;
       }
       while(temp2!=NULL){
           ans.push_back(temp2->data);
           temp2=temp2->next;
       }
       sort(ans.begin(),ans.end());
       Node* res=new Node(ans[0]);
       Node* temp=res;
       for(int i=1;i<ans.size();i++){
           temp->next=new Node(ans[i]);
           temp=temp->next;

       }
       temp->next=NULL;
       return res;
    }
};