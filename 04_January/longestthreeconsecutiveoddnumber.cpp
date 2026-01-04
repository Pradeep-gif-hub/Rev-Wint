class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        if(n<3) return false;
        vector<int>ans;
        for(int x: arr){
            if(x%2!=0){
                ans.push_back(1);
            }
            else{
                ans.push_back(0);
            }
        }
        for(int i=1;i<n-1;i++){
            if(ans[i-1]==1 && ans[i]==1 && ans[i+1]==1){
                return true;
            }
        }
        return false;
    }
};