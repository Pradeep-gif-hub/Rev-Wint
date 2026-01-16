class Solution {
public:
    int minMen(vector<int>& arr) {
        int n=arr.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
            if(arr[i]!=-1)
                v.push_back({max(0,i-arr[i]),min(n-1,i+arr[i])});
        sort(v.begin(),v.end());
        int ans=0,i=0,cover=0;
        while(cover<n){
            int far=cover;
            while(i<v.size() && v[i].first<=cover)
                far=max(far,v[i++].second+1);
            if(far==cover)return -1;
            ans++;
            cover=far;
        }
        return ans;
    }
};
