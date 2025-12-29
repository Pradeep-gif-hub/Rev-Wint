class Solution {
  public:
    vector<int> cntInRange(vector<int> &arr, vector<vector<int>> &queries) {
       sort(arr.begin(),arr.end());
       vector<int>ans;
       for(auto &q: queries){
           int a=q[0];
           int b=q[1];
           int r=upper_bound(arr.begin(),arr.end(),b)-arr.begin();
           int l=lower_bound(arr.begin(),arr.end(),a)-arr.begin();
           ans.push_back(r-l);
       }
       return ans;
    }
};