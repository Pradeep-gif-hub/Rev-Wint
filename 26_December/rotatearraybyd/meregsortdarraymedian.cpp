// Problem: Given two sorted arrays, find the median of the merged sorted array.
// Basic idea: Merge the two arrays while maintaining sorted order, then find the median of the merged array.
// using the map<int,int> to store the frequency of each element from both arrays, then reconstruct the sorted 
// merged array and calculate the median. 


class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        map<int,int>mp;
        for(int x:a)mp[x]++;
        for(int x:b)mp[x]++;
        
        vector<int>ans;
        for(auto it :mp){
            while(it.second--){
                ans.push_back(it.first);  // keep duplicates
            }
        }
        int total=ans.size();
        if(total%2!=0)
            return ans[total/2];
        else
            return (ans[total/2-1]+ans[total/2])/2.0;
    }
};
