class Solution {
  public:
    vector<vector<int>>ans;
    void solve(int idx,vector<int>& arr){
        if(idx==arr.size()){
            ans.push_back(arr);
            return;
        }
        for(int i=idx;i<arr.size();i++){
            swap(arr[idx],arr[i]);   //choose
            solve(idx + 1,arr);     //explore
            swap(arr[idx],arr[i]);   // backtrack
        }
    }
    vector<vector<int>>permuteDist(vector<int>& arr){
        solve(0,arr);
        return ans;
    }
};
