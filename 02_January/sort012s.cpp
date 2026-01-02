class Solution {
  public:
    vector<int> sort012(vector<int>& arr) {
        int low=0,mid=0,high=arr.size()-1;
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[low++],arr[mid++]);
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid],arr[high--]);
            }
     }
    return arr;
}
};
