class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int maxcnt=0;
        int row=0;
        for(int i=0;i<n;i++){
           int cnt=0;
           for(int j=0;j<m;j++){
            if(mat[i][j]==1) cnt++;
           }
           if(cnt>maxcnt){
            maxcnt=cnt;
            row=i;
           }
        } 
        return {row,maxcnt};
    }
};
//class Solution {
// public:
//     vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
//         int n=mat.size();
//         int m=mat[0].size();
//         int r=-1;
//         int j=m-1;
//         for(int i=0;i<n;i++){
//             while(j>=0 && mat[i][j]==1){
//                 r=i;
//                 j--;
//             }

//         }
//         int maxones=(r==-1)?0:(m-j-1);
//         return {r,maxones};
//     }
// };