class Solution {
public:
    vector<int>moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0) {
                nums[j++]=nums[i]; // kind of making new array as num adn assigning the only variable which !=0 and the once 0 they get appended later
            }
        }
        while(j<nums.size()){
            nums[j++]=0;
        }
        return nums;
    }
};
