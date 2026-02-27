class Solution{
private:
    void mergeSo(vector<int>&arr,int l,int m,int r){
        int left=l;
        int right=m+1;
        vector<int>temp;
        while(left<=m&&right<=r){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=m){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=r){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=l;i<=r;i++){
            arr[i]=temp[i-l];
        }
    }
    void merges(vector<int>&arr,int l,int r){
        if(l>=r)return;
        int mid=l+(r-l)/2;
        merges(arr,l,mid);
        merges(arr,mid+1,r);
        mergeSo(arr,l,mid,r);
    }
public:
    void mergeSort(vector<int>&arr,int l,int r){
        merges(arr,0,arr.size()-1);
    }
};