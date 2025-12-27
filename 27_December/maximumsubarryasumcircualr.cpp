class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        int n=arr.size();
        int curmin=0; 
        int curmax=0;
        int total=0;
        int maxsum=arr[0];
        int minsum=arr[0];
        for(int x: arr){
            curmax=max(x,curmax+x);
            maxsum=max(maxsum,curmax);
            curmin=min(x,curmin+x);
            minsum=min(minsum,curmin);
            total+=x;
        }
        return maxsum<0?maxsum:max(maxsum,total-minsum);
    }
};