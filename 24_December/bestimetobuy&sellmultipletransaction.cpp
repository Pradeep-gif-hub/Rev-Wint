class Solution {
  public:
    int stockBuySell(vector<int> &arr) {
        int n=arr.size();
        int maxprof=0;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                maxprof +=(arr[i]-arr[i-1]);       // Trying to maximise till arr[i]>arr[i-1]
            }
        }
        return maxprof;
    }
};
