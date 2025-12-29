A)TC-O(N) and SC-O(1)

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n=arr.size();
        int dup=-1,missing=0;

        for(int i=0;i<n;i++){
            int idx=abs(arr[i])-1;
            if(arr[idx]<0)
                dup=abs(arr[i]);
            else
                arr[idx]=-arr[idx];
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                missing=i+1;
                break;
            }
        }

        return {dup, missing};
    }
};

b) TC-O(N) and SC-O(N)

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> mp;
        int dup=0,missing=0;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            if(mp[arr[i]]==2)
                dup=arr[i];
        }
        for(int i=1;i<=n;i++){
            if(!mp.count(i)){
                missing=i;
                break;
            }
        }
        return {dup, missing};
    }
};




