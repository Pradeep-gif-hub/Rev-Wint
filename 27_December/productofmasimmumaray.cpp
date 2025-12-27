keyidea-to find the maximum sum, here just keep in mind of the negative number which can actually contribute to the larger multiples)....O(N) 

class Solution{
public:
    int maxProduct(vector<int>& arr){
        int n=arr.size();
        int currentmax=arr[0];
        int currentmin=arr[0];
        int maxprod=arr[0];

        for(int i=1;i<n;i++){
            int temp=currentmax;
            
            currentmax=max(arr[i],max(currentmax*arr[i],currentmin*arr[i]));
            currentmin=min(arr[i],min(temp*arr[i],currentmin*arr[i]));

            maxprod=max(maxprod,currentmax);
        }
        return maxprod;
    }
};















