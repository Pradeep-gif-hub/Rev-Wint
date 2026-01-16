class Solution {
public:
    int maxFreqSum(string s) {
        int cnt[26]={0}, v=0, c=0;
        for(char x:s){
            int &m=cnt[x-'a'];
            m++;
            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
                v=max(v, m);
            else
                c=max(c, m);
        }
        return v+c;
    }
};
