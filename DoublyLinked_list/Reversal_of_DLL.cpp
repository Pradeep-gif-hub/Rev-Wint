#include<iostream>
#include<stack>
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
Node* reverse_DLL(Node* head){
    if(head == nullptr) return nullptr;

    stack<int> st;
    Node* temp = head;

    while(temp != nullptr){
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;

    while(temp != nullptr){
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }

    return head;
}

int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->prev=head;
    head->next->next=new Node(3);
    head->next->next->prev=head->next;
    head->next->next->next=new Node(4);
    head->next->next->next->prev=head->next->next;
    head=reverse_DLL(head);
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}