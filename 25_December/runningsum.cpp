class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int temp=0;
        for(int i=0;i<n;i++){
            temp+=nums[i];
            ans.push_back(temp);
        }
        return ans;
    }
};