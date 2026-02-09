class SpecialStack {
    stack<pair<int,int>>st;
  public:
    SpecialStack() {
        // Define Stack
        stack<pair<int,int>>st;
    }

    void push(int x) {
        // Add an element to the top of Stack
        if(st.empty()) st.push({x,x});
        else{
            st.push({x,min(x,st.top().second)});
        }
        
        
    }

    void pop() {
        // Remove the top element from the Stack
        if(st.empty()) return;
        else{
            st.pop();
        }
    }

    int peek() {
        // Returns top element of the Stack
        if(st.empty()) return -1;
        else{
            return st.top().first;
        }
    }

    bool isEmpty() {
        // Check if stack is empty
        if(st.empty()) return true;
        else{
            return false;
        }
    }

    int getMin() {
        // Finds minimum element of Stack
        if(st.empty()) return -1;
        else{
            return st.top().second;
        }
    }
};