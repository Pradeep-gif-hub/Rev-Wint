class Solution {
  public:
    bool isBalanced(string& s) {
       int size=s.length();
       stack<char>st;
       for(int i=0;i<size;i++){
           if(s[i]=='(' || s[i]=='{' || s[i]=='['){
               st.push(s[i]);
           }
           else{
               if(st.empty()) return false;
               char c=st.top();
               st.pop();
               if(s[i]==')' && c!='(' || s[i]=='}' && c!='{' || s[i]==']' && c!='['){
                   return false;
               }
           }
       }
       return st.empty();
    }
};