// class Solution {
//   public:
//   int longestConsecutive(vector<int>& arr) {
//       int n=arr.size();
//       map<int,int>mp;
//       for(int x: arr){ 
//           mp[x]=1;
//       }
//       int curr=1;
//       int longest=1;
//       int prev=INT_MIN;
//       for(auto it: mp){
//           if(it.first==prev+1){
//               curr+=1;
//           }
//           else{
//               curr=1;
//           }
//           longest=max(longest,curr);
//           prev=it.first;
//       }
//       return longest;
       
//     }
// };


class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();
        if(n==0)return 0;
        sort(arr.begin(),arr.end());
        int cnt=1,maxCnt=1;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]+1){
                cnt++;
            } else if(arr[i]!=arr[i-1]){
                cnt=1;
            }
            maxCnt=max(maxCnt,cnt);
        }
        return maxCnt;
    }
};                          