keyidea- make a unordered_map and store all the nums and the occurance if greater than 1 then its duplicate.. 

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            if(it.second>1){
                return it.first;
            }
        }
        return 0;
    }
};

10. SetMatrix Zero ( As per the vector 2D  matrix we use the bool and array ) TC-O(m*n)...

m- row ( matrix.size());
n-coloumn (matrix[0].size());

 keyidea- We basically set TWO Bool Variables as FALSE ( firstcol,firstrow) and then keep updating it till the cases matches like arr[i][0]==0, firstcol=true; arr[0][j]==0, firstrow=true; accordingly change the value of each row and coloumn...

class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        int m=mat.size();
        int n=mat[0].size();
        bool firstrow=false,firstcol=false;
        for(int i=0;i<m;i++){
            if(mat[i][0]==0) firstcol=true;
        }
        for(int j=0;j<n;j++){
            if(mat[0][j]==0) firstrow=true;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(mat[i][j]==0){
                    mat[i][0]=0;
                    mat[0][j]=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(mat[i][0]==0 || mat[0][j]==0){
                    mat[i][j]=0;
                }
            }
        }
        if(firstcol){
            for(int i=0;i<m;i++) mat[i][0]=0;
        }
        if(firstrow){
            for(int j=0;j<n;j++) mat[0][j]=0;
        }
    }
};