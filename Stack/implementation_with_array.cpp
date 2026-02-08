class myStack {
  public:
    int top;
    int *st;
    int cap;

    myStack(int n) {
        cap=n;
        top=-1;
        st=new int[n];
    }

    bool isEmpty() {
        return top==-1;
    }

    bool isFull() {
        return top==cap-1;
    }

    void push(int x) {
        if(isFull()) return;
        st[++top]=x;
    }

    void pop() {
        if(isEmpty()) return;
        top--;
    }

    int peek() {
        if(isEmpty()) return -1;
        return st[top];
    }
};
