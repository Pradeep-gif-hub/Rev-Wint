#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
Node* insert_at_top(Node* head,int x){
    Node* newNode=new Node(x);
    if(head==nullptr){
        newNode->next=head;
    head=newNode;
    return head;
    } 
    newNode->next=head;
    head=newNode;
    return head;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head=nullptr;
    head=insert_at_top(head,10);
    head=insert_at_top(head,20);
    head=insert_at_top(head,30);
    print(head);
    return 0;
}