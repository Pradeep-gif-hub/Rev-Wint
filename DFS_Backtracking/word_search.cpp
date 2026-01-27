class Solution {
  public:
    int n, m;
    
    bool dfs(int i, int j, int idx, vector<vector<char>> &mat, string &word){
        if(idx==word.size())
            return true;
        if(i<0||j<0||i>=n||j>=m||mat[i][j]!=word[idx])
            return false;
        char temp=mat[i][j];
        mat[i][j]='#';
        bool found=dfs(i+1,j,idx+1,mat,word) ||
                     dfs(i-1,j,idx+1,mat,word) ||
                     dfs(i,j+1,idx+1,mat,word) ||
                     dfs(i,j-1,idx+1,mat,word);
        mat[i][j]=temp; // backtrack
        return found;
    }
    bool isWordExist(vector<vector<char>> &mat,string &word) {
        n=mat.size();
        m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if (mat[i][j]==word[0]) {
                    if (dfs(i,j,0,mat,word))
                        return true;
                }
            }
        }
        return false;
    }
};
