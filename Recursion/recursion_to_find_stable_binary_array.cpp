class Solution {
public:
    const int MOD=1e9+7;
    int memo[201][201][2][201]; // actually (num of zero,ones left,(eiether one or zero last,total count of last consecutive number )) m[2][4][1][3] - 2 zero left , 4 ones left, last elemtn 1 and 4 ones already been inserted so that we aacn actaukly compair with the limit...
    int dfs(int z,int o,int last,int cnt,int limit){
        if(z==0&&o==0) return 1;
        int &res=memo[z][o][last][cnt];
        if(res!=-1) return res;
        long long ans=0;
        if(z>0){
            if(last!=0) ans+=dfs(z-1,o,0,1,limit);
            else if(cnt<limit) ans+=dfs(z-1,o,0,cnt+1,limit);
        }
        if(o>0){
            if(last!=1) ans+=dfs(z,o-1,1,1,limit);
            else if(cnt<limit) ans+=dfs(z,o-1,1,cnt+1,limit);
        }
        return res=ans%MOD;
    }

    int numberOfStableArrays(int zero,int one,int limit){
        memset(memo,-1,sizeof(memo));
        long long ans=0;
        if(zero>0) ans+=dfs(zero-1,one,0,1,limit);
        if(one>0) ans+=dfs(zero,one-1,1,1,limit);
        return ans%MOD;
    }
};
