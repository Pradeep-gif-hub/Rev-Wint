 keyidea- if either length is 0 then print null vector, make and unorderd_map [value,occurance], match the first with second and accrodinly update the map and push the common element to the vector array..

class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        int n=a.size();
        int m=b.size();
        if(n==0 | m==0) return 0;
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int x: a){
            mp[x]++;
        }
        for(int x: b){
            if(mp[x]>0){   // push if the occurance of any is more than one 
               ans.push_back(x); 
               mp[x]--; // remove the ones which has been duplicated ones
            }
        }
        int cnt=ans.size();
        return cnt;
    }
};

OR 

class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        int n=a.size();
        int m=b.size();
        int cnt=0;
        if(n==0 || m==0) return 0;
        unordered_map<int,int>mp;
        for(int x: a) mp[x]++;
        for(int x: b) mp[x]++;
        for(auto it: mp){
            if(it.second>1){
                cnt+=1;
                continue;
            }
        }
        return cnt;
    }
};
