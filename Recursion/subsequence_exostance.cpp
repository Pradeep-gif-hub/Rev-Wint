// class Solution{
// public:
//     bool checkSubsequenceSum(int n, vector<int>& arr, int k) {

//         vector<bool>dp(k+1,false);
//         dp[0]=true;
//         for(int num : arr){
//             for(int s=k;s>=num;s--){
//                 dp[s]=dp[s] || dp[s-num];
//             }
//         }
//         return dp[k];
//     }
// };
class Solution {
private:
   bool helper(int i, int sum, vector<int>& arr, int k, int n) {
    if(sum==k)return true;
    if(i==n || sum>k)return false;
    if(helper(i+1, sum + arr[i], arr, k, n))
        return true;
    return helper(i+1, sum, arr, k, n);
}
public:
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        return helper(0, 0, arr, k, n);
    }
};