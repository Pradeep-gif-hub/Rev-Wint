class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n=arr.size();
        int right=n-1;
        int left=0;
        int rightmax=0;
        int leftmax=0;
        int water=0;
        while(left<right){
            if(arr[left]<arr[right]){
                leftmax=max(leftmax,arr[left]);
                water+=leftmax-arr[left];
                left++;
            }
            else {
                rightmax=max(rightmax,arr[right]);
                water+=rightmax-arr[right];
                right--;
            }
        }
        return water;
    }
};