O(nlogn) using Binary Search-

class Solution {
public:
    int countLessEqual(vector<int>& arr, int x) {
    sort(arr.begin(),arr.end()); // O(n log n)

    int l=0,r=arr.size()-1;
    int ans=-1;

    while(l<=r) {
        int mid=l+(r-l)/2;
        if (arr[mid]<=x) {
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }

    return ans+1; 
}
};

OR using UNORDERED_MAP O(N)

class Solution {
public:
    int countLessEqual(vector<int>& arr, int x) {
        int n=arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
         }

        int cnt=0;
        for(auto it: mp){
            if(it.first<=x){
                 cnt+=it.second;
         }
        }
      return cnt;
    }
};

3. 