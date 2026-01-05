// class Solution {
// public:
//     int minLength(vector<int>& nums, int k) {
//     unordered_map<int,int>mp;
//     mp[0]=-1;
//     int sum=0,ans=INT_MAX;
//     for (int i=0;i<nums.size();i++) {
//         sum+=nums[i];
//         if (mp.count(sum-k)){
//             ans=min(ans,i-mp[sum-k]);
//         }
//         if(!mp.count(sum)) {
//             mp[sum]=i;
//         }
//     }
//     return ans==INT_MAX?-1:ans;
//   }
// };

class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        int n=nums.size();
        int left=0;
        int sum=0;
        int ans=INT_MAX;
        for(int right=0;right<n;right++) {
            if(freq[nums[right]]==0) {
                sum+=nums[right];
            }
            freq[nums[right]]++;
            while(sum>=k){
                ans=min(ans,right-left+1);
                freq[nums[left]]--;
                if(freq[nums[left]]==0){
                    sum-=nums[left];
                }
                left++;
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};



