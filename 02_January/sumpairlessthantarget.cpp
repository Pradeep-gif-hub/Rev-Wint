keyidea- we do binary search after soritng and then find the sum whcih are less than target and moreover cnt+=(r-l);

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n<2)return 0;
        int l=0;
        int r=n-1;
        int cnt=0;
        while(l<r){
              if(nums[l]+nums[r]<target){
                cnt+=(r-l);
                l++;
              }
              else{
                r--;
              }
        }
        return cnt;
    }
};











 