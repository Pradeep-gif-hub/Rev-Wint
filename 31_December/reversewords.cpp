class Solution {
  public:
    string reverseWords(string s) {
        int n=s.length();
        string ans="";
        string temp="";
        for (int i=n-1;i>=0;i--){
            if (s[i]=='.'){
                if (!temp.empty()) {
                    reverse(temp.begin(),temp.end());
                    if (!ans.empty()) ans+='.';
                    ans+=temp;
                    temp="";
                }
            }else{
                temp+=s[i];
            }
        }
        if(!temp.empty()) {
            reverse(temp.begin(),temp.end());
            if (!ans.empty()) ans+='.';
            ans+=temp;
        }

        return ans;
    }
};
