a). class Solution {
  public:
    string reverseString(string& s) {
        reverse(s.begin(), s.end());
        return s;
    }
};

User function Template for C++
b). class Solution {
  public:
    string reverseString(string& s) {
        string ans;
        for(int i=s.length()-1;i>=0;i--){
            ans.push_back(s[i]);
        }
        s=ans;
        return ans;
    }
};

//User function Template for C++
c). class Solution {
  public:
    string reverseString(string& s) {
        int n=s.length();
        string ans="";
        int j=0;
        for(int i=n-1;i>=0;i--){
            ans+=s[i];
            j++;
        }
        s=ans;
        return ans;
    }
};
