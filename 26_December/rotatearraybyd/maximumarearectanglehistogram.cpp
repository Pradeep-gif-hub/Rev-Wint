//keyidea- append into the stack each values and assign the hight to array 
// top value and pop it further, width == either i or  i-st.top()-1 depending upon st.empty()...

class Solution {
  public:
    int getMaxArea(vector<int> &arr) {
        stack<int>st;
        int ans=0;
        int n=arr.size();
        
        for(int i=0;i<=n;i++){
            int cur=(i==n?0:arr[i]);
            while(!st.empty() && arr[st.top()]>cur){
                int height=arr[st.top()];
                st.pop();
                int width=st.empty()?i:i-st.top()-1;
                ans=max(ans,height*width);
            }
            st.push(i);
        }
        return ans;
    }
};