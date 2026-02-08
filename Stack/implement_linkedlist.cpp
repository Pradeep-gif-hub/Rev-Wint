class myStack {
  private:
    Node* top;

  public:
    myStack() {
        top=NULL;
    }

    bool isEmpty() {
        return top==NULL;
    }

    void push(int x) {
        Node* temp=new Node(x);
        temp->next=top;
        top=temp;
    }

    void pop() {
        if (isEmpty()) return;
        Node* temp=top;
        top=top->next;
        free(temp);
        //delete temp;
    }

    int peek() {
        if (isEmpty()) return -1;
        return top->data;
    }

    int size() {
        int cnt=0;
        Node* temp=top;
        while(temp!=NULL) {
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
};
