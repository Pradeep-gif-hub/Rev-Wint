class Solution{
  public:
    int maxWater(vector<int>&arr){
        int n=arr.size();
        int l=0,r=n-1;
        int leftmax=0,rightmax=0;
        int total=0;

        while(l<r){
            if(arr[l]<=arr[r]){
                if(arr[l]>=leftmax){
                    leftmax=arr[l];
                }else{
                    total+=leftmax-arr[l];
                }
                l++;
            }
            else{
                if(arr[r]>=rightmax){
                    rightmax=arr[r];
                }else{
                    total+=rightmax-arr[r];
                }
                r--;
            }
        }
        return total;
    }
};
