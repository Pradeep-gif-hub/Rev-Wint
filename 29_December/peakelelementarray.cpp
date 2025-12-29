class Solution {
  public:
    int peakElement(vector<int>& arr) {
        int n=arr.size();
        if (n==1) return 0;
        if (arr[0]>=arr[1]) return 0;

        if (arr[n-1]>=arr[n-2]) return n-1;
        for (int i=1;i<n-1;i++) {
            if (arr[i]>=arr[i-1] && arr[i]>=arr[i+1]) {
                return i;
            }
        }
        return -1;
    }
};
//class Solution {
//   public:
//     int peakElement(vector<int> &arr) {
//         int n=arr.size();
//         int l=0;
//         int r=n-1;
//         int peak=0;
//         while(l<r){
//             int mid=l+(r-l)/2;
//             if(arr[mid]<arr[mid+1]){
//                 l=mid+1;
//             }
//             else{
//                 r=mid;
//             }
//         }
//         return l;
//     }
// };
