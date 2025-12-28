class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>res;
        priority_queue<pair<int,int>>heap;
        
        for(int i=0;i<k;i++)
        heap.push({arr[i],i});
        res.push_back(heap.top().first);
        
        for(int i=k;i<arr.size();i++) {
        heap.push({arr[i],i});
        while (heap.top().second<=i-k)
            heap.pop();
        res.push_back(heap.top().first);
    }
    return res;
    }
};