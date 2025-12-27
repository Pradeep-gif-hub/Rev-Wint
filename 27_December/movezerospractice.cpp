a) keyidea- if nums[i]!=0 then just put it at arr[j], j++..while(j<nums.size()) nums;[j++]=0;

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

b) using the Zerocount-accordingly make a new array and append..

class Solution {
  public:
    vector<int>pushZerosToEnd(vector<int>& arr) {
        int n=arr.size();
        int zerocount=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0) zerocount++;
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(arr[i]!=0) ans.push_back(arr[i]);
        }
        int j=0;
        while(j!=zerocount){
            ans.push_back(0);
            j++;
        }
        arr=ans;
        return ans;
    }
};
