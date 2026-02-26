class Solution {
private: 
    bool helper(string &s, int i){
        int n=s.length();
        if(i>=n/2) return true;
        if(s[i]!=s[n-i-1]) return false;
        return helper(s,i+1);
    }
public:
    bool isPalindrome(string s) {
        return helper(s,0);
    }
};
