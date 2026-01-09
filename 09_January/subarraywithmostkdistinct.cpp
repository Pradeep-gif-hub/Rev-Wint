class Solution {
public:
    int countAtMostK(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int>mp;
        int l=0;
        int res=0;
        for(int right=0;right<n;right++){
            mp[arr[right]]++;
            if(mp[arr[right]]==1){
                k--; 
            }
            while(k<0){
                mp[arr[l]]--;
                if(mp[arr[l]]==0){
                    k++;
                }
                l++;
            }
            res+=(right-l+1);
        }
        return res;
    }
    int subarraysWithKDistinct(vector<int>&nums,int k){
        return countAtMostK(nums,k)-countAtMostK(nums,k-1);
    }
};
