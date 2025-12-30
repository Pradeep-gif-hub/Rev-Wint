class Solution {
  public:
    char nonRepeatingChar(string &s) {
        map<char,int> mp;
        for(char c : s){
            mp[c]++;
        }
        for(char c :s){
            if(mp[c]==1){
                return c;
            }
        }
        return '$';
    }
};