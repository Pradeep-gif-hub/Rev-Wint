// a) GFG allows it with map since it gives extra O(1) space for map to store... 

class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(mp.count(arr[i])){
                continue;
            }
            ans.push_back(arr[i]);
            mp[arr[i]]=i;
        }
        return ans;
    }
};

// b) LeetCode Solution With iteration...

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int k=1;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};