class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int totalSum=0;
        for(int x : nums) {
            totalSum += x;
        }
        int cnt=0;
        int leftSum=0;
        for(int i=0;i<n-1;i++) {
            leftSum+=nums[i];
            int rightSum=totalSum-leftSum;
            if(abs(leftSum-rightSum)%2==0) {
                cnt++;
            }
        }
        return cnt;
    }
};

