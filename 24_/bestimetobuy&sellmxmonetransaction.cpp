// a.(Two Pointer)
  class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int n=prices.size();
        int l=0,r=1,maxprof=0;
        while(r<n){
            if(prices[l]<prices[r]){
                maxprof=max(maxprof,prices[r]-prices[l]);                                                                                                   // Maximising till proce[l]<prices[r]
            }
            else l=r;
            r++;
        }
        return maxprof;  
    }
};

// b. Greedy 

 class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int minprice=prices[0];
        int maxprice=0;
        for(int i=1;i<prices.size();i++){
            minprice=min(minprice,prices[i]);
            maxprice=max(maxprice,prices[i]-minprice);
        }
        return maxprice;
    }
};
