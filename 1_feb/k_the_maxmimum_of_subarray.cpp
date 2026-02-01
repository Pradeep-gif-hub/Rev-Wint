class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        int n=arr.size();
        priority_queue<pair<int,int>>heap;
        vector<int>ans;
        for(int i=0;i<k;i++)
        heap.push({arr[i],i});
        ans.push_back(heap.top().first);
        for(int i=k;i<n;i++){
        heap.push({arr[i],i});
        while(heap.top().second<=i-k)
        heap.pop();
        ans.push_back(heap.top().first);
        }
      return ans;
    }
};


// class Solution {
//   public:
//     vector<int> maxOfSubarrays(vector<int>& arr, int k) {
//         deque<int> dq;
//         vector<int> ans;
//         for(int i=0;i<arr.size();i++){
//             // remove out-of-window elements
//             if(!dq.empty() && dq.front()==i-k)
//                 dq.pop_front();
//             // remove smaller elements
//             while(!dq.empty() && arr[dq.back()]<arr[i])
//                 dq.pop_back();
//             dq.push_back(i);
//             if(i>=k-1)
//                 ans.push_back(arr[dq.front()]);
//         }
//         return ans;
//     }
// };


// class Solution {
//   public:
//     vector<int> maxOfSubarrays(vector<int>& arr,int k) {
//         vector<int> ans;
//         int n=arr.size();
//         for(int i=0;i<=n-k;i++){
//             int mx=arr[i];
//             for(int j=i;j<i+k;j++){
//                 mx=max(mx,arr[j]);
//             }
//             ans.push_back(mx);
//         }
//         return ans;
//     }
// };

// class Solution {
//   public:
//     vector<int> maxOfSubarrays(vector<int>& arr, int k) {
//         int n=arr.size();
//         int temp;
//         vector<int>ans(n-k+1);
//         for(int i=0;i<=n-k;i++){
//             temp=*max_element(arr.begin()+i,arr.begin()+i+k);
//             ans[i]=temp;
//         }
//         return ans;
//     }
// };