class Solution {
public:
    string minWindow(string& s1, string& s2) {
        int n=s1.size(),m=s2.size();
        int minLen=INT_MAX;
        string ans="";
        for(int i=0;i<n;i++){
            int j=i,k=0;
            while(j<n && k<m){
                if(s1[j]==s2[k])k++;
                j++;
            }
            if(k==m){
                if(j-i<minLen){
                    minLen=j-i;
                    ans=s1.substr(i,minLen);
                }
            }
        }
        return ans;
    }
};
