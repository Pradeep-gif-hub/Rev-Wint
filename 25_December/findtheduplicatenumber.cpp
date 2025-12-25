//keyidea- make a unordered_map and store all the nums and 
// the occurance if greater than 1 then its duplicate.. 

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            if(it.second>1){
                return it.first;
            }
        }
        return 0;
    }
};