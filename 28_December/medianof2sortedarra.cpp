class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        int n=arr.size();
        map<int,int>mp;
        for(int x: arr){
            if(x>0) mp[x]++;
        }
        int num=1;
        for(auto it: mp){
            if(it.first==num){
                num++;
            }
            else if(it.first>num){
                return num;
            }
        }
        return num;
    }
};