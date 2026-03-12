class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>oneind;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                oneind.push_back(i);
            }
        }
        for(int i=0;i<oneind.size()-1;i++){
            if(oneind.size()==0) return true;
            if(oneind[i+1]-oneind[i]<=k){
                return false;
            }
        }
        return true;
    }
};