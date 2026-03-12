class Solution{
public:
    int countSubarrays(vector<int>&arr){
        int n=arr.size();
        stack<int>st;
        long long ans=0;
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&arr[st.top()]>=arr[i])//next smaller elemetn 
            //concept
                st.pop();
            if(st.empty())
                ans+=(n-i);
            else
                ans+=(st.top()-i);

            st.push(i);
        }
        return ans;
    }
};
