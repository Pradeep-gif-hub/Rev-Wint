// “subarray”
// “between i and j”
// “exactly k”
// “at most k”
// “count number of ways”
// Think prefix sum immediately

 
// Keydiea- maintain the Sum which are of odd(a%2!=0) and then try to find out in mp [sum-k] else mp[sum-k]++ and increase the counter...initialise the Mp[0]=1

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        mp[0]=1;
        int sum=0,count=0;
        for(int a : nums){
            sum+=(a % 2);          
            if(mp.count(sum-k))
                count+=mp[sum-k];
            mp[sum]++;
        }

        return count;
    }
};







