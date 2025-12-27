keyidea- take a temp variable asn store the sum of it and keep appending it to the respective places of the vector after the updation of temp variable 

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
