class SpecialStack {
    stack<int>st;
    int mini=INT_MAX;
  public:
    SpecialStack() {
        // Define Stack
        stack<int>st;
    }

    void push(int x) {
        // Add an element to the top of Stack
        if(st.empty()) st.push(x);
        else{
            if(x>mini) st.push(x);
            else{
                st.push(2*x-mini);
                mini=x;
            }
        }
    }

    void pop() {
        // Remove the top element from the Stack
        if(st.empty()) return;
        else{
           int x=st.top();
           st.pop();
           if(x<mini){
               mini=2*mini-x;
           }
           
        }
    }

    int peek() {
        // Returns top element of the Stack
        if(st.empty())return -1;
        int x=st.top();
        st.pop();
        if(x>mini) return x;
        return mini;
    }

    bool isEmpty() {
        // Check if stack is empty
        return st.empty()?true:false;
    }

    int getMin() {
        // Finds minimum element of Stack
        return mini;
    }
};


// class SpecialStack {
//     stack<int>st;
//      int mini=INT_MAX;

//   public:
//     SpecialStack() {
//         // Define Stack
//         stack<int>st;
//          int mini=INT_MAX;
//     }

//     void push(int x) {
//         // Add an element to the top of Stack
//         if(st.empty()){
//             st.push(x);
//             mini=x;
//         }
//         else{
//             if(x>mini) st.push(x);
//             else{
//                 st.push(2*x-mini);
//                 mini=x;
//             }
//         }
//     }

//     void pop() {
//         // Remove the top element from the Stack
//         if(st.empty()) return;
//         else{
//           int x=st.top();
//           st.pop();
//           if(x<mini){
//               mini=2*mini-x;
//           }
           
//         }
//     }

//     int peek() {
//         // Returns top element of the Stack
//         if(st.empty())return -1;
//         int x=st.top();
//         if(x>mini) return x;
//         return mini;
//     }

//     bool isEmpty() {
//         // Check if stack is empty
//         return st.empty();
//     }

//     int getMin() {
//         // Finds minimum element of Stack
//         if(st.empty()) return -1;
//         return mini;
//     }
// };

