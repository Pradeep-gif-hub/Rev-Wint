class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(auto it: nums){
            sum+=it;
        }
        int ans=0;
        if(sum%k==0) return 0;
        while(sum%k!=0){
            sum--;
            ans++;
        }
        return ans;
    }
};


// return sum%k;