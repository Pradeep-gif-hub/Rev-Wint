class Solution {
  public:
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& queries) {
        unordered_map<int,vector<int>>mp; 
        for(int i=0;i<arr.size();i++) 
        mp[arr[i]].push_back(i);
        vector<int>ans; 
        for(auto &q: queries){ 
            auto &v=mp[q[2]];
            ans.push_back(upper_bound(v.begin(), v.end(),q[1])
            -lower_bound(v.begin(), v.end(),q[0]) ); 
            
        } 
        return ans;
    }
};