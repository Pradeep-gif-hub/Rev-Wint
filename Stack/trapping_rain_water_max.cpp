class Solution{
private:
    vector<int>prefixmax(vector<int>&arr){
        int n=arr.size();
        vector<int>prefix(n);
        prefix[0]=arr[0];
        for(int i=1;i<n;i++){
            prefix[i]=max(prefix[i-1],arr[i]);
        }
        return prefix;
    }

    vector<int>suffix(vector<int>&arr){
        int n=arr.size();
        vector<int>suf(n);
        suf[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=max(suf[i+1],arr[i]);
        }
        return suf;
    }

public:
    int maxWater(vector<int>&arr){
        int n=arr.size();
        int total=0;
        vector<int>p=prefixmax(arr);
        vector<int>s=suffix(arr);
        for(int i=0;i<n;i++){
            int water=min(p[i],s[i])-arr[i];
            if(water>0)
                total+=water;
        }
        return total;
    }
};
