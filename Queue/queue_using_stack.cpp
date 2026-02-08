class myQueue {
  private:
    stack<int> s1,s2;

  public:
    myQueue() {
    }

    void enqueue(int x) {
        s1.push(x);
    }

    void dequeue() {
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        if(!s2.empty()) s2.pop();
    }

    int front() {
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        if(s2.empty()) return -1;
        return s2.top();
    }

    int size() {
        return s1.size()+s2.size();
    }
};
