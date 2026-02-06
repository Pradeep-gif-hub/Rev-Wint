class Solution{
private:
    int helper(Node* temp){
        if(temp==NULL) return 1;
        int carry=helper(temp->next);
        carry+=temp->data;
        if(carry<10){
            temp->data=carry;
            return 0;
        }
        temp->data=0;
        return 1;
    }

public:
    Node* addOne(Node* head){
        int carry=helper(head);
        if(carry){
            Node* newNode=new Node(carry);
            newNode->next=head;
            head=newNode;
        }
        return head;
    }
};
