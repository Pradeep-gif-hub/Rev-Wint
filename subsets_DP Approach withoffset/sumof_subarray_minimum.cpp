class Solution{
  private:
    vector<int>previoussmallerelement(vector<int>&arr){
        int n=arr.size();
        stack<int>st;
        vector<int>psl(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            psl[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return psl;
    }
    vector<int>nextsmallerelement(vector<int>&arr){
        int n=arr.size();
        stack<int>st;
        vector<int>nsl(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            nsl[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return nsl;
    }
  public:
    int sumSubMins(vector<int>&arr){
        int n=arr.size();
        const int mod=1e9+7;
        vector<int>psl=previoussmallerelement(arr);
        vector<int>nsl=nextsmallerelement(arr);
        long long total=0;
        for(int i=0;i<n;i++){
            long long left=i-psl[i];
            long long right=nsl[i]-i;
            total=(total+(arr[i]*left%mod*right)%mod)%mod;
        }
        return total;
    }
};
