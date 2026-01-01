class Solution {
  public:
    int findWays(int n) {
        if(n%2==1) return 0;  
        int pairs=n/2;
        vector<long long> dp(pairs+1,0);
        dp[0]=dp[1]=1;
        for(int i=2;i<=pairs;i++) {
            for (int j=0;j<i;j++) {
                dp[i]+=dp[j]*dp[i-j-1];
            }
        }
        return dp[pairs];
    }
};