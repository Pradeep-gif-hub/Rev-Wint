class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        long long  ans=0;
        int n=happiness.size()-1;
        for(int i=0;i<k;i++)
        {
            if(happiness[n-i]-i>0)
            {
                ans+=happiness[n-i]-i;
            }
            else
            {
                ans+=0;
            }
        }
        return ans;
    }
};