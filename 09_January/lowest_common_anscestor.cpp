class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int start=0,maxLen=1;
        for(int i=0;i<n;i++){
            expand(s,i,i,start,maxLen);     
            expand(s,i,i+1,start,maxLen); 
        }
        return s.substr(start,maxLen);
    }
    void expand(string &s,int l,int r,int &start,int &maxLen){
        int n=s.length();
        while(l>=0 && r<n && s[l]==s[r]){
            if(r-l+1>maxLen){
                maxLen=r-l+1;
                start=l;
            }
            l--;
            r++;
        }
    }
};
