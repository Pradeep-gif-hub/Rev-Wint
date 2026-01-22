#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int>A(n),B(m);
        for (int i=0; i<n;i++) cin>>A[i];
        for (int i=0;i<m;i++) cin>>B[i];
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        int ans=0;
        int j=0;
        for(int i=0;i<n;i++){
            while(j<m && B[j] < A[i]) {
                j++;
            }
            ans+=j;
        }
        cout<<ans<<endl;
    }
    return 0;
}
