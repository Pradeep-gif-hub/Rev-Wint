#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* insert_head(Node* head, int val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = head;
    return newNode;
}
int main() {
    Node* head = nullptr;

    head = insert_head(head, 10);
    head = insert_head(head, 20);
    head = insert_head(head, 30);

    // print list
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
