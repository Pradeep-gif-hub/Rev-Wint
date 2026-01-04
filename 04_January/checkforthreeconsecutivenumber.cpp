// User function Template for C++
class Solution {
  public:
    vector<int> consecutiveSum(int n){
        vector<int>ans;
        for(int i=0;i<n-2;i++){
            if(i+i+1+i+2==n){
                return {i,i+1,i+2};
            }
        }
        return {-1};
    }
};