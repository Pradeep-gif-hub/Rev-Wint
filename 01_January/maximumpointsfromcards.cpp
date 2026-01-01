//keyidea- We have to choose the subarray such that it has minimum sum so 
//that totalsum- minsum will automatically give us the array of cards maximum sum form the either end

class Solution {
  public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int totalsum=0;
        for(int x: cardPoints){
            totalsum+=x;
        }
        int windowsum=0;
        int windowsize=n-k;
        for(int i=0;i<windowsize;i++){
            windowsum+=cardPoints[i];
        }
        int minwindowsum=windowsum;
        for(int i=windowsize;i<n;i++){
            windowsum+=cardPoints[i]-cardPoints[i-windowsize];
            minwindowsum=min(minwindowsum,windowsum);
        }
        return totalsum-minwindowsum;
    }
};

