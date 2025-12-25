// idea- Try to figure out numbe rof ZEROS first so that to avoid
// the Zero Divison Error as of mult/arr[i] caused because of it..

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int mult=1;
        int zeroCount=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0) mult*=nums[i];
            else zeroCount++;
        }
        for(int i=0;i<n;i++){
            if(zeroCount>1) ans.push_back(0);
            else if(zeroCount==1) {
                if(nums[i]==0) ans.push_back(mult);
                else ans.push_back(0);
            }
            else{
                ans.push_back(mult/nums[i]);
            }
        }
        return ans;
    }
};