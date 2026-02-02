class Solution {
public:
    int countTriples(int n) {
        int cnt=0;
        for(int a=1;a<n;a++){
            for(int b=1;b<n;b++){
                int C=a*a+b*b;
                int c=sqrt(C);
                if(c*c==C && c<=n){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};