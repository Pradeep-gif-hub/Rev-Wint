class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        map<int,int>mp;
        int n=a.size();
        int m=b.size();
        for(int x: a) mp[x]++;
        for(int x: b) mp[x]++;
        vector<int>ans(n+m);
        for(auto it: mp){
            ans.push_back(it.first);
        }
        return ans[k-1];
    }
};