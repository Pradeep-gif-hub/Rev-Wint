class Solution {
private:
    int priority(char c){
        if(c=='^') return 3;
        if(c=='*' || c=='/') return 2;
        if(c=='+' || c=='-') return 1;
        return -1;
    }

public:
    string infixToPostfix(string& s) {
        stack<char> st;
        string ans="";

        for(char ch : s){

            // Operand
            if(isalnum(ch)){
                ans += ch;
            }

            // Opening bracket
            else if(ch=='('){
                st.push(ch);
            }

            // Closing bracket
            else if(ch==')'){
                while(!st.empty() && st.top()!='('){
                    ans += st.top();
                    st.pop();
                }
                st.pop(); // remove '('
            }

            // Operator
            else{
                while(!st.empty() && st.top()!='(' &&
                     (priority(ch) < priority(st.top()) ||
                     (priority(ch) == priority(st.top()) && ch != '^'))){
                    ans += st.top();
                    st.pop();
                }
                st.push(ch);
            }
        }

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};
