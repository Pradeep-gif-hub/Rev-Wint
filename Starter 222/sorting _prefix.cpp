#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i=0;i<N;i++) cin>>A[i];
        int mx=-1;
        for(int i=0;i<N;i++) {
            if(A[i]!=i+1){
                mx=i;
            }
        }
        if(mx==-1){
            cout<<0<<endl;
            continue;
        }
        int ans=INT_MAX;
        for(int i=mx;i<N;i++) {
            ans=min(ans,A[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
