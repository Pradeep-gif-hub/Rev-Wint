#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<long long>A(N);
        for (int i=0;i<N;i++)cin>>A[i];
        const long long NEG=-1e18;
        vector<vector<long long>>dp(N+1,vector<long long>(N+1,NEG));
        dp[0][0]=0;
        for(int i=0;i<N;i++){
            for(int w=0;w<=N;w++){
                if(dp[i][w]==NEG) continue;

                // Gain 1 watch, sell 0
                dp[i+1][w+1]=max(dp[i+1][w+1],dp[i][w]);
                // Sell 1 (need w+1 >= 1)
                if(w+1>=1){
                    dp[i+1][w]=max(dp[i+1][w],dp[i][w]+A[i]);
                }
                // Sell 2 (need w+1 >= 2)
                if(w+1>=2){
                    dp[i+1][w-1]=max(dp[i+1][w-1],dp[i][w]+2*A[i]);
                }
            }
        }

        long long ans=0;
        for(int w=0;w<=N;w++) {
            ans=max(ans,dp[N][w]);
        }
        cout << ans << "\n";
    }
    return 0;
}
