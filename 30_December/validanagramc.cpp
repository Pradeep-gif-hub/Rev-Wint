class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        int n=s1.length();
        int m=s2.length();
        if(n!=m) return false;
        map<char,int>mp1;
        map<char,int>mp2;
        for(char c: s1) mp1[c]++;
        for(char c: s2) mp2[c]++;
        if(mp1==mp2){
            return true;
        }
        else{
           return false;
        }
        
    }
};

OR

class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        int n=s1.length();
        int m=s2.length();
        if(n!=m) return false;
        map<char,int>mp;
        for(char c: s1){
            mp[c]++;
        }
        for(char c: s2){
            if(mp[c]==0){
                return false;
            }
            mp[c]--;
        }
    }
};
OR 

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ma;
        unordered_map<char,int>mb;
        for(auto ch:s)
           ma[ch]++;
        for(auto cl:t)
           mb[cl]++;
        return ma==mb;
    }
};