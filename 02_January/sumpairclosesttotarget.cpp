keyidea- we actually use Binary seach adn make a mindiff=INT_MAX and if diff<mindiff then update and it adn print the value..


class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        int l=0,mid=0,r=arr.size()-1;
        if(arr.size()<2) return {};
        sort(arr.begin(),arr.end());
     
        int mindiff=INT_MAX;
        int sum=0;
        int diff=0;
        vector<int>ans(2);
        while(l<r){
            sum=arr[l]+arr[r];
            diff=abs(sum-target);
            if(diff<mindiff){
                mindiff=diff;
                ans[0]=arr[l];
                ans[1]=arr[r];
            }
            if(sum<target){
                l++;
            }
            else{
                r--;
            }
        }
        return ans;
    }
};