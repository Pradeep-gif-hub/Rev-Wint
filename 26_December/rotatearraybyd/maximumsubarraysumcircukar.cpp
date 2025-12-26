//keyidea- we use diff variables curmax,curmin,maxsum,minsum; accordingly we 
//update as per the WRAPPING around the array.

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=0,curMax=0,curMin=0,maxSum=nums[0],minSum=nums[0];
        for(int x:nums){
            curMax=max(x,curMax+x);
            maxSum=max(maxSum,curMax);
            curMin=min(x,curMin+x);
            minSum=min(minSum,curMin);
            total+=x;
        }
        return maxSum<0?maxSum:max(maxSum,total-minSum);
    }
};