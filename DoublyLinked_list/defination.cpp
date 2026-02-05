#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

Node* CreateDLL(vector<int>& arr){
    if(arr.size() == 0) return NULL;

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        temp->prev = prev;
        prev->next = temp;
        prev = temp;
    }

    return head;
}

int main(){
    vector<int> arr = {1,2,3,4,5};

    Node* head = CreateDLL(arr);

    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
