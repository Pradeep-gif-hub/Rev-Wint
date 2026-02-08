class myStack {
    queue<int> q;

  public:

    void push(int x) {
        // Inserts an element x at the top of the stack
        q.push(x);
        int n=q.size();
        while(n>1){
            q.push(q.front());
            q.pop();
            n--;
        }
    }

    void pop() {
        // Removes an element from the top of the stack
        if(q.empty()) return;
        q.pop();
    }

    int top() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if(q.empty()) return -1;
        return q.front();
    }

    int size() {
        // Returns the current size of the stack
        return q.size();
    }
};
