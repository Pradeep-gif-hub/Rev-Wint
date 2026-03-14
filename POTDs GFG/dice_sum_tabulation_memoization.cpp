class Solution {
  public:
    int noOfWays(int m,int n,int x) {
       vector<vector<int>>dp(n+1,vector<int>(x+1,0)); // matrix of row n+1, column of x+1 dp[dice][sum]=i
       dp[0][0]=1; //inirtail at sum=0, dice=0 = tarika =0
// dice\sum |0 1 2 3 4 5
// ----------------------
// 0        |1 0 0 0 0 0
// 1        |0 1 1 1 0 0
// 2        |0 0 1 2 3 2
       for(int dice=1;dice<=n;dice++){
           for(int sum=1;sum<=x;sum++){
               for(int face=1;face<=m;face++){
                   if(sum-face>=0){
                       dp[dice][sum]+=dp[dice-1][sum-face];
                   }
               }
           }
       }
       return dp[n][x];
    }
};

// class Solution {
// public:
//     int solve(int m,int dice,int sum,vector<vector<int>>&dp){
//         if(dice==0) return sum==0;
//         if(sum<0) return 0;
//         if(dp[dice][sum]!=-1) return dp[dice][sum];
//         int ways=0;
//         for(int face=1;face<=m;face++){
//             ways+=solve(m,dice-1,sum-face,dp);
//         }
//         return dp[dice][sum]=ways;
//     }
//     int noOfWays(int m,int n,int x){
//         vector<vector<int>> dp(n+1,vector<int>(x+1,-1));
//         return solve(m,n,x,dp);
//     }
// };
