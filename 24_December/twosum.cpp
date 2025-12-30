class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            int com=target-arr[i];            
            if(mp.count(com)){
                return true;
            }
            mp[arr[i]]=i;
        }
        return false;
    }
};