#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin>>N>>M;
    int extra=M-N;
    int happy=min(N, extra);
    cout<<happy<<endl;
    return 0;
}
