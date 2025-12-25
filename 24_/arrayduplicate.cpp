class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(mp.count(arr[i])) {
                ans.push_back(arr[i]);
            }
            mp[arr[i]]=i;
        }
        return ans;
    }  
};