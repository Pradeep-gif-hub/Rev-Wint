a).Using unorderd_Map ( implemented using HASH TABLE -O(N)).. 

class Solution{
public:
    int subarraySum(vector<int>& nums,int k){
        int n=nums.size();
        int currentSum=0;
        int cnt=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            currentSum+=nums[i];
            if(mp.count(currentSum-k)){
                cnt+=mp[currentSum-k];
            }
            mp[currentSum]++;
        }
        return cnt;
    }
};

b). Dual iteration O(N^2).. 

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++) {
            int sum=0;
            for(int j=i; j < n; j++) {  // start from i, not i+1
                sum+=nums[j];
                if(sum==k) {
                    count++;
                }
            }
        }
        return count;
    }
}; 