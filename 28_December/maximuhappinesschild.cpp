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


// class Solution {
// public:
//     long long maximumHappinessSum(vector<int>& a, int k) {
//         int n=a.size();
//         sort(a.begin(),a.end(),greater<int>());
//        long long int sum=0;
//         for(int i=0;i<n;i++){
//             if(i>=k){break;}
//            long long int x=a[i]-i;
//             if(x<=0){
//                 break;
//             }
//             sum +=x;
//         }
//         return sum;
        
//     }
// };