class Solution {
  public:
    bool detectLoop(Node* head) {
       if(head==NULL) return false;
       Node* temp=head;
       map<Node*,int>mp;
       while(temp!=NULL){
           if(mp.find(temp)!=mp.end()){
               return true;
           }
           mp[temp]=1;
           temp=temp->next;
       }
       return false;
    }
};