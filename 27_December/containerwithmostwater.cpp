keyidea- using the two pointer try to find the hight and width such that the area is maximum 

class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n=arr.size();
        int l=0;
        int r=n-1;
        int maxarea=0;
        while(l<r){
            int height=min(arr[l],arr[r]);
            int width=r-l;
            maxarea=max(maxarea,height*width);
            if(arr[l]<arr[r]) l++;
            else r--;
        }
        return maxarea;
        
    }
};
