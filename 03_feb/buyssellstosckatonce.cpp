class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxProfit=0;
        for(int price : prices){
            minPrice=min(minPrice, price);          // best buying price so far
            maxProfit=max(maxProfit,price-minPrice); // best profit
        }
        return maxProfit;
    }
};
