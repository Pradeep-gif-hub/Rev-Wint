/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        int zcnt=0,ocnt=0,tcnt=0;
        Node* temp=head;
        while(temp!=nullptr){
            if(temp->data==0){
                zcnt+=1;
            }
            else if(temp->data==1){
                ocnt+=1;
            }
            else{
                tcnt+=1;
            }
            temp=temp->next;
        }
        temp=head;
        while(zcnt--){
            temp->data=0;
            temp=temp->next;
        }
        while(ocnt--){
            temp->data=1;
            temp=temp->next;
        }
        while(tcnt--){
            temp->data=2;
            temp=temp->next;
        }
        return head;
    }
};