//keyidea- just make the pair map with the number and its occurance-
// remove the duplicates..now iterate over with the logic of curr to increase if it.
//first==prev+1, where prev=INT_MIN (any small number), Find the largest among them 

class Solution {
  public:
  int longestConsecutive(vector<int>& arr) {
      int n=arr.size();
      map<int,int>mp;
      for(int x: arr){ 
          mp[x]=1;
      }
      int curr=1;
      int longest=1;
      int prev=INT_MIN;
      for(auto it: mp){
          if(it.first==prev+1){
              curr+=1;
          }
          else{
              curr=1;
          }
          longest=max(longest,curr);
          prev=it.first;
      }
      return longest;
       
    }
};

//b) Using the Array and its logic ( O(n))..

// keyidea- simply make a counter and iterate through the array 
//if the condition arr[i]==arr[i-1]+1 matches cnt++, else cnt=1; and find the max of it at the end of the iteration...

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
