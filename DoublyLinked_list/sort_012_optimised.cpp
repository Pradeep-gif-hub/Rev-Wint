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
        if(head==NULL || head->next==NULL) return head;
        Node* zeroHead=new Node(-1);
        Node* oneHead=new Node(-1);
        Node* twoHead=new Node(-1);
        
        Node* zero=zeroHead;
        Node* one=oneHead;
        Node* two=twoHead;
        Node* temp=head;
        while(temp!=nullptr){
            if(temp->data==0){
                zero->next=temp;
                zero=zero->next;
            }
            else if(temp->data==1){
                one->next=temp;
                one=one->next;
            }
            else{
                two->next=temp;
                two=two->next;
            }
            temp=temp->next;
        }
        zero->next=(oneHead->next)?(oneHead->next):twoHead->next;
        one->next=twoHead->next;
        two->next=NULL;
        
        Node* newNode=zeroHead->next;
        
        delete zeroHead;
        delete oneHead;
        delete twoHead;
        return newNode;
        
    }
};
// /* Node is defined as
//   class Node {
//   public:
//     int data;
//     Node* next;

//     Node(int x) {
//         data = x;
//         next = nullptr;
//     }
// };
// */
// class Solution {
//   public:
//     Node* segregate(Node* head) {
//         int zcnt=0,ocnt=0,tcnt=0;
//         Node* temp=head;
//         while(temp!=nullptr){
//             if(temp->data==0){
//                 zcnt+=1;
//             }
//             else if(temp->data==1){
//                 ocnt+=1;
//             }
//             else{
//                 tcnt+=1;
//             }
//             temp=temp->next;
//         }
//         temp=head;
//         while(zcnt--){
//             temp->data=0;
//             temp=temp->next;
//         }
//         while(ocnt--){
//             temp->data=1;
//             temp=temp->next;
//         }
//         while(tcnt--){
//             temp->data=2;
//             temp=temp->next;
//         }
//         return head;
//     }
// };