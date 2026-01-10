class Solution {
  public:
    int atMostK(string &s, int k) {
        if (k<0) return 0;
        int n=s.size();
        vector<int>freq(26,0);
        int l=0,res=0,distinct=0;
        for (int r=0;r<n;r++) {
            if(freq[s[r]-'a']==0)
                distinct++;
            freq[s[r]-'a']++;
            while(distinct>k){
                freq[s[l]-'a']--;
                if(freq[s[l]-'a']== 0)
                    distinct--;
                l++;
            }
            res+=(r-l+1);
        }
        return res;
    }

    int countSubstr(string& s, int k) {
        return atMostK(s,k)-atMostK(s,k-1);
    }
};
