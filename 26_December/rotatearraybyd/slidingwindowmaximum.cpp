//a) using normal method of iteration over a certain range of k

class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        int n=arr.size();
        int temp;
        vector<int>ans(n-k+1);
        for(int i=0;i<=n-k;i++){
            temp=*max_element(aqrr.begin()+i,arr.begin()+i+k);
            ans[i]=temp;
        }
        return ans;
    }
};

//b) using the O(N^2) method for dual iteration.

class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr,int k) {
        vector<int> ans;
        int n=arr.size();
        for(int i=0;i<=n-k;i++){
            int mx=arr[i];
            for(int j=i;j<i+k;j++){
                mx=max(mx,arr[j]);
            }
            ans.push_back(mx);
        }
        return ans;
    }
};

// MOST OPTIMISED SOLUTION SO FAR...
//c). with help of DEQUE- TC -O(N ) and SC- O(k)..

//Keyidea- Deque lets you drop useless elements from both sides efficiently.   
//That’s why it’s perfect for:  i). Sliding Window Maximum
// ii). Monotonic queue problems
 
class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        deque<int> dq;
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            // remove out-of-window elements
            if(!dq.empty() && dq.front()==i-k)
                dq.pop_front();
            // remove smaller elements
            while(!dq.empty() && arr[dq.back()]<arr[i])
                dq.pop_back();
            dq.push_back(i);
            if(i>=k-1)
                ans.push_back(arr[dq.front()]);
        }
        return ans;
    }
};


