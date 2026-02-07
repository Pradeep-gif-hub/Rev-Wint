class Solution {
  public:
    int cycleStart(Node* head) {
       if(head==NULL) return -1;
       map<Node*, int>mp;
       Node* temp=head;
       while(temp!=NULL){
           if(mp.find(temp)!=mp.end()){
               return temp->data;
           }
           mp[temp]=1;
           temp=temp->next;
       }
       return -1;
    }
};