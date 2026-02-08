class Solution {
  public:
    Node* insertionSort(struct Node* head_ref) {
       if(head_ref==NULL) return head_ref;
       Node* temp=head_ref;
       vector<int>ans;
       while(temp!=NULL){
           ans.push_back(temp->data);
           temp=temp->next;
       }
       sort(ans.begin(),ans.end());
       Node* newHead=new Node(ans[0]);
       temp=newHead;
       for(int i=1;i<ans.size();i++){
           temp->next=new Node(ans[i]);
           temp=temp->next;
       }
       temp->next=NULL;
       return newHead;
    }
};