class Solution {
public:
    int countSubset(vector<int>& a, int k) {
        int lo=0,hi=0;
        for (int x : a)(x<0?lo:hi)+=x;
        if(k<lo || k>hi) return 0;
        int off=-lo;
        vector<long long>dp(hi-lo+1);
        dp[off]=1;
        for(int x : a) {
            auto ndp=dp;
            for(int s=lo;s<=hi;s++)
                if(dp[s+off]) ndp[s+x+off]+=dp[s+off];
            dp.swap(ndp);
        }
        return dp[k+off];
    }
};

// for positive numbers only
// No offset needed
// class Solution {
//   public:
//     int countSubset(vector<int> &arr, int k) {
//         int n = arr.size();
//         vector<int> dp(k + 1, 0);
        
//         dp[0] = 1; // empty subset
        
//         for (int x : arr) {
//             for (int s = k; s >= x; s--) {
//                 dp[s] += dp[s - x];
//             }
//         }
//         return dp[k];
//     }
// };
