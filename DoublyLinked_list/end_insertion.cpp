/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node* newNode=new Node(x);
        if(head==nullptr) return newNode;
        Node* temp= head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
        return head;
    }
};