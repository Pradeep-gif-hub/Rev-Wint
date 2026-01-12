class Solution{
public:
    vector<int> firstNegInt(vector<int>&arr,int k){
        int n=arr.size();
        vector<int>ans;
        deque<int>dq;
        for(int i=0;i<n;i++){
            if(arr[i]<0)dq.push_back(i);
            if(!dq.empty() && dq.front()<=i-k) 
            dq.pop_front();
            if(i>=k-1){
                if(!dq.empty()) ans.push_back(arr[dq.front()]);
                else ans.push_back(0);
            }
        }
        return ans;
    }
};
