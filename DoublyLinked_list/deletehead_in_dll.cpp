// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/
Node *deleteHead(Node *head) {
    if(head==nullptr) return nullptr;
    Node* prev=head;
    head=head->next;
    head->prev=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;
}
