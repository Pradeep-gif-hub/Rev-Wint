class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        int n=arr.size();
        stack<int>st;
        vector<int>ans(n);
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<=arr[i%n]){
                st.pop();
            }
            if(i<n){
            ans[i]=st.empty()?-1:st.top();
            }
            st.push(arr[i%n]);  
        }
        return ans;
    }
};