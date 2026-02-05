class Solution {
  public:
    Node* divide(Node* head) {

        if(head == NULL) return head;

        vector<int> even, odd;
        Node* temp = head;

        while(temp){
            if(temp->data % 2 == 0)
                even.push_back(temp->data);
            else
                odd.push_back(temp->data);

            temp = temp->next;
        }

        temp = head;

        for(int x : even){
            temp->data = x;
            temp = temp->next;
        }

        for(int x : odd){
            temp->data = x;
            temp = temp->next;
        }

        return head;
    }
};
