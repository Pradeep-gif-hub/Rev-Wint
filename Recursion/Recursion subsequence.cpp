class Solution {
private:
    void helper(int ind,vector<int>& nums,vector<int>& temp, vector<vector<int>>& ans){
        if(ind==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[ind]);
        // for(int i=ind;i<nums.size();i++){
        //     temp.push_back(nums[i]);     // pick
        //     helper(i+1,nums,temp,ans);
        //     temp.pop_back();             // not pick (backtrack)
        // }
        helper(ind+1,nums,temp,ans);
        temp.pop_back();
        helper(ind+1,nums,temp,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(0,nums,temp,ans);
        return ans;
    }
};