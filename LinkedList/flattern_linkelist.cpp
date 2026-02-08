class Solution {
  Node* merge(Node* head1, Node* head2){
      if(head1==NULL && head2==NULL) return NULL;
      if(head1==NULL) return head2;
      if(head2==NULL) return head1;
      Node* dummy=new Node(0);
      Node* res=dummy;
      while(head1!=NULL && head2!=NULL){
          if(head1->data<head2->data){
              res->bottom=head1;
              res=head1;
              head1=head1->bottom;
          }
          else{
              res->bottom=head2;
              res=head2;
              head2=head2->bottom;
          }
          res->next=nullptr;
      }
      if(head1) res->bottom=head1;
      if(head2) res->bottom=head2;
      if(dummy->bottom) dummy->bottom->next=nullptr;
      return dummy->bottom;
  }
  public:
    Node *flatten(Node *root) {
        if(root==NULL || root->next==NULL) return root;
        Node* mergeNode=flatten(root->next);
        root=merge(root,mergeNode);
        return root;
    }
};