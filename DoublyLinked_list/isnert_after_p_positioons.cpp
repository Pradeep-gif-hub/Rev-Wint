class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {

        Node* newNode = new Node(x);

        if(head == nullptr) return newNode;

        Node* temp = head;


        for(int i = 1; i <= p && temp->next != nullptr; i++){
            temp = temp->next;
        }

        Node* nextNode = temp->next;

        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = nextNode;

        if(nextNode != nullptr)
            nextNode->prev = newNode;

        return head;
    }
};
