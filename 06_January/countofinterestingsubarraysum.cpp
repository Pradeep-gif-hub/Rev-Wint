class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        int n=nums.size();
        long long ans=0;
        int prefix=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int x: nums){
            if(x%modulo==k){
                prefix++;
            }
            int cur=prefix%modulo;
            int req=(cur-k+modulo)%modulo;
            if(mp.count(req)){
                ans+=mp[req];
            }
            mp[cur]++;
        }
        return ans;
    }
};