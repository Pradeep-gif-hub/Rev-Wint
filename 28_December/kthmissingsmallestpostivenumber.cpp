class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        map<int,int> mp;
        for(int x : arr){
            mp[x]++;
        }
        int missingCount = 0;
        int num = 1;
        while(true){
            if(!mp.count(num)){  
                missingCount++;
                if(missingCount == k)
                    return num;
            }
            num++;
        }
    }
};
