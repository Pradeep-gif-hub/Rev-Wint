class Solution {
  private:
    Node* reverse(Node* head){
        Node* prev = nullptr;
        Node* curr = head;
        while(curr){
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    Node* removeZeros(Node* head){
        while(head && head->data == 0){
            head = head->next;
        }

        return head ? head : new Node(0);
    }

  public:
    Node* addTwoLists(Node* head1, Node* head2) {

        head1 = reverse(head1);
        head2 = reverse(head2);

        Node* dummy = new Node(0);
        Node* curr = dummy;

        int carry = 0;

        while(head1 || head2 || carry){

            int sum = carry;

            if(head1){
                sum += head1->data;
                head1 = head1->next;
            }

            if(head2){
                sum += head2->data;
                head2 = head2->next;
            }

            carry = sum / 10;

            curr->next = new Node(sum % 10);
            curr = curr->next;
        }

        Node* ans = reverse(dummy->next);
        ans = removeZeros(ans);

        return ans;
    }
};