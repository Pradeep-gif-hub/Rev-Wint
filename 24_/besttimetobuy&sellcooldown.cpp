class Solution {
  public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int buy=-arr[0];
        int cool=0;
        int sell=0;
        for(int i=1;i<n ; i++){
            int prev =buy;
            buy=max(buy, cool- arr[i]);
            cool=sell;
            sell=max(sell, prev+arr[i]);
        }
        return sell;
        
    }
};