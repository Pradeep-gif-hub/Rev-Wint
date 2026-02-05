#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
Node* kth_element_dll(Node* head, int k){
    if(head == NULL) return NULL;

    Node* temp = head;
    int cnt = 1;

    while(temp != NULL && cnt < k){
        temp = temp->next;
        cnt++;
    }
    if(temp == NULL) return head;
    if(temp == head){
        head = head->next;
        if(head != NULL)
            head->prev = NULL;

        delete temp;
        return head;
    }

    Node* prev = temp->prev;
    Node* next = temp->next;

    if(prev != NULL) prev->next = next;
    if(next != NULL) next->prev = prev;

    delete temp;
    return head;
}

int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->prev=head;
    head->next->next->prev=head->next;
    head->next->next->next->prev=head->next->next;
    head=kth_element_dll(head,1);
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}