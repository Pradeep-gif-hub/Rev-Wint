class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.count(nums[i])){
                return true;
            }
            mp[nums[i]]=i;
        }
        return false;
    }
};