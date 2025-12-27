class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int com=target-arr[i];
            if(mp.count(com)){
                return true;
            }
            mp[arr[i]]=i;
        }
        return false;
    }
};

// class Solution {
//   public:
//     bool twoSum(vector<int>& arr, int target) {
//       int n=arr.size();
//       sort(arr.begin(),arr.end());
//       int l=0;
//       int r=n-1;
//       while(l<r){
//           int sum=arr[l]+arr[r];
//           if(sum==target){
//               return true;
//           }
//           else if(sum>target){
//               r--;
//           }
//         else{
//             l++;
//         }
//       }
//       return false;
       
//     }
// };