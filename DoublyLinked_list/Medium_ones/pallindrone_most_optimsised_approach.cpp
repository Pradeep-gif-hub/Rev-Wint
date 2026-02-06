class Solution {
private:
    Node* reverseList(Node* head) {
        if (head == NULL || head->next == NULL) return head;
        Node* newHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }

public:
    bool isPalindrome(Node *head) {
        if (head == NULL || head->next == NULL) return true;

        Node* slow = head;
        Node* fast = head;

        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        Node* newNode = reverseList(slow->next);

        Node* first = head;
        Node* second = newNode;

        while (second != NULL) {
            if (first->data != second->data) {
                reverseList(newNode); // restore
                return false;
            }
            first = first->next;
            second = second->next;
        }

        reverseList(newNode); // restore
        return true;
    }
};