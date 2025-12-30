class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.length()-1;
        while (l<r) {
            if(!isalnum(s[l])){ l++; continue; }
            if(!isalnum(s[r])){ r--; continue; }
            if(tolower(s[l])!=tolower(s[r])) return false;
            l++;
            r--;
        }
        return true;
    }
};

OR

class Solution {
  public:
    bool isPalindrome(string& s) {
        string newstr="";
        int n=s.length();
        for(int i=n-1;i>=0;i--){
            newstr+=s[i];
        }
        return newstr==s;
    }
};
