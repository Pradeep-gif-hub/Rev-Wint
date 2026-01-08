class Solution {
public:
    int countSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int sum=0,res=0;
        for(int x:nums){
            sum+=(x%2);
            if(mp.count(sum-k))
                res+=mp[sum-k];
            mp[sum]++;
        }
        return res;
    }
};

class Solution {
  private: 
    int cntodd(vector<int>& ans){
        int cnt=0;
        for(int x:ans){
            if(x%2!=0) cnt++;
        }
        return cnt;
    }
    
  public:
    int countSubarrays(vector<int>& arr,int k){
        int n=arr.size();
        int res=0;
        for(int i=0;i<n;i++){
            vector<int> temp;
            for(int j=i;j<n;j++){
                temp.push_back(arr[j]);
                if(cntodd(temp)==k) res++;
            }
        }
        return res;
    }
};