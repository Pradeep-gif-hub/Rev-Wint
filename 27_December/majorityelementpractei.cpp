keyidea- simply make an unordered_map [ first(number), second(occurance) ] and the element which came the most ( precisely > than n/2 ) then just print it with it.first

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto it: mp){ // it is an iterator for both the states ( a. first b.second)
            if(it.second>n/2){
                return it.first;
            }
        }
        return -1;
    }
};
