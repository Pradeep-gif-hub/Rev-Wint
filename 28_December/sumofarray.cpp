// User function template for C++
class Solution {
  public:
    int arraySum(vector<int>& arr) {
        int n=arr.size();
        int cnt=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            cnt+=it.first*it.second;
        }
        return cnt;
    }
};

// User function template for C++
// class Solution {
//   public:
//     int arraySum(vector<int>& arr) {
//      int n=arr.size();
//      int cnt=0;
//      for(int i=0;i<n;i++){
//          cnt+=arr[i];
//      }
//      return cnt;
//     }
// };