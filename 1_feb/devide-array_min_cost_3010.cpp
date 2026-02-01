class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        int first=INT_MAX;
        int second=INT_MAX;
        for(int i=1;i<n;i++){
            if(nums[i]<first){
                second=first;
                first=nums[i];
            }
            else if(nums[i]<second){
                second=nums[i];
            }
        }
        return sum+first+second;
    }
};

// sort(nums(arr.begin()+1,nums.end()));
// sum+nums[1]+nums[2];