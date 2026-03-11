class Solution{
private:
    string helper(int n){
        if(n==0)return "0";
        string s="";
        while(n>0){
            s+=(n%2)+'0';
            n/=2;
        }
        reverse(s.begin(),s.end());
        return s;
    }
public:
    int bitwiseComplement(int n){
        string ans=helper(n);
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='1')ans[i]='0';
            else ans[i]='1';
        }
        int res=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='1'){
                res+=(1<<(ans.size()-i-1));
            }
        }
        return res;
    }
};
