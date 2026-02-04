// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/
// Node* deleteAtPosition(Node* head, int pos) {
//     if(head==nullptr)
//         return head;
//     if(pos==1){
//         Node* temp=head;
//         head=head->next;
//         delete temp;
//         return head;
//     }
//     Node* temp=head;
//     int cnt=1;
//     while(temp!=nullptr && cnt<pos-1){
//         temp=temp->next;
//         cnt++;
//     }
//     if(temp==nullptr || temp->next==nullptr)
//         return head;
//     Node* del=temp->next;
//     temp->next=del->next;
//     delete del;
//     return head;
// }
Node *deleteAtPosition(Node *head, int pos) {
    if(head==nullptr  || head->next==nullptr) return head;
    Node* prev=nullptr;
    if(pos==1){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int cnt=0;
    Node* temp=head;
    while(temp!=nullptr){
        cnt++;
        if(cnt==pos){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}