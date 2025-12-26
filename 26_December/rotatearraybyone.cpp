//keyidea- simply we make an arr and assign the ans[0]=arr[n-1], 
and from last to first push remaming values to it..

class Solution {
  public:
    vector<int>rotate(vector<int> &arr){
        int last=arr.back();
        for(int i=arr.size()-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=last;
        return arr;
    }
};
