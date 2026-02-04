#include<iostream>
#include<vector.>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data1,Node*next1){
        data=data1;
        next=next1;
    }
};
Node* deleteHead(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
int main(){
    Node* head=new Node(1,NULL);
    head->next=new Node(2,NULL);
    head->next->next=new Node(3,NULL);
    head=deleteHead(head);
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return 0;
}
