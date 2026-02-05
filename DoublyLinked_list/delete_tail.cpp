#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
Node* delete_end(Node* head){
    if(!head) return NULL;
    if(!head->next){
        delete head;
        return NULL;
    }
    Node* temp=head;
    while(temp!=NULL && temp->next!=NULL){
        temp=temp->next;
    }
    temp->prev->next=NULL;
    delete temp;
    return head;
}
int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->prev=head;
    head->next->next=new Node(30);
    head->next->next->prev=head->next;

    head=delete_end(head);

    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
