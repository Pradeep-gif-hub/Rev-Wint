class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int m=matrix[0].size();
        int l=matrix[0][0];
        int r=matrix[n-1][m-1];
        while(l<r){
            int mid=l+(r-l)/2;
            int cnt=0;
            for(int i=0;i<n;i++){
                cnt+=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
            }
            if(cnt<k){
                l=mid+1;
            }
            else {
                r=mid;
            }
        }
        return l;
    }
};
// class Solution {
// public:
//     int kthSmallest(vector<vector<int>>& matrix,int k){
//         priority_queue<int>maxheap;
//         int n=matrix.size();
//         int m=matrix[0].size();
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 maxheap.push(matrix[i][j]);
//                 if(maxheap.size()>k){
//                     maxheap.pop();
//                 }
//             }
//         }
//         return maxheap.top();
//     }
// };
