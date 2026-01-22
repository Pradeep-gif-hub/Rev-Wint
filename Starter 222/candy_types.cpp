#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int c;
        cin >> c;
        
        unordered_map<int, int> mp;
        for (int i = 0; i < c; i++) {
            int col;
            cin >> col;
            mp[col]++;
        }
        int anscol=INT_MAX;
        int maxfreq=0;
        for (auto &it : mp) {
            int colour=it.first;
            int count=it.second;
            if(count>maxfreq){
                maxfreq=count;
                anscol=colour;
            }
            else if(count==maxfreq){
                anscol=min(colour,anscol);
            }
        }

        cout<<anscol<<endl;
    }

    return 0;
}
