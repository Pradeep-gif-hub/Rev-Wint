class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        int low=mat[0][0];
        int high=mat[n-1][m-1];
        
        while(low<high){
            int mid=low+(high-low)/2;
            int cnt=0;
            for(int i=0;i<n;i++){
                cnt+=upper_bound(mat[i].begin(),mat[i].end(),mid)
                -mat[i].begin();
            }
            if(cnt<k)
                low=mid+1;
            else
                high=mid;
        }
        return low;
    }
};

OR 

class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
      int n=mat.size();
      int m=mat[0].size();
      vector<int>ans(1);
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              ans.push_back(mat[i][j]);
          }
      }
      sort(ans.begin(),ans.end());
      int res=ans[k];
      return res;
    }
};