class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        long long sum=0;
        int negative=0;
        int minm=INT_MAX;
        for(int i=0;i<n;i++ ){
            for(int j=0;j<n;j++){
                minm=min(minm,abs(matrix[i][j]));
                sum+=abs(matrix[i][j]);
                if(matrix[i][j]<0) negative++;
            }
        }
        if(negative%2!=0) sum-=2*minm;
        return sum;
    }
};