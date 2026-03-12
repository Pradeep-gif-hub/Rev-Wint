// class Solution {
// private:
//     int sumarr(vector<int>&arr){
//         int n=arr.size();
//         int sum=0;
//         for(int i=0;i<n;i++){
//             sum+=arr[i];
//         }
//         return sum;
//     }
//   public:
//     int missingNum(vector<int>& arr) {
//         int n=arr.size();
//         int arrsum=sumarr(arr);
//         int numsum=0;
//         for(int i=1;i<=n+1;i++){
//             numsum+=i;
//         }
//         int ans=numsum-arrsum;
//         return ans;
//     }
// };
// also we can use the (n*n+1/2) sum approach
class Solution {
public:
    int missingNum(vector<int>& arr) {
        int n = arr.size();
        int xor1=0, xor2 = 0;
        for(int i=0;i<n;i++){
            xor1 ^=arr[i];
        }
        for(int i=1;i<=n+1;i++){
            xor2^=i;
        }
        return xor1^xor2;
    }
};