class Solution{
public:
    long long countTriplets(vector<int>&arr,int target){
        int n=arr.size();
        sort(arr.begin(),arr.end());
        long long cnt=0;

        for(int i=0;i<n-2;i++){

            // early pruning (safe for counting)
            if((long long)arr[i]+arr[i+1]+arr[i+2]>target) break;
            if((long long)arr[i]+arr[n-1]+arr[n-2]<target) continue;

            int l=i+1;
            int r=n-1;

            while(l<r){
                long long sum=(long long)arr[i]+arr[l]+arr[r];

                if(sum==target){
                    if(arr[l]!=arr[r]){
                        long long leftCount=1,rightCount=1;

                        while(l+1<r&&arr[l]==arr[l+1]){
                            leftCount++;
                            l++;
                        }
                        while(r-1>l&&arr[r]==arr[r-1]){
                            rightCount++;
                            r--;
                        }

                        cnt+=leftCount*rightCount;
                        l++;
                        r--;
                    }
                    else{
                        long long len=r-l+1;
                        cnt+=(len*(len-1))/2;
                        break;
                    }
                }
                else if(sum<target){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return cnt;
    }
};