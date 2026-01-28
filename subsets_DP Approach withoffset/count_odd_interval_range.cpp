class Solution {
public:
    int countOdds(int low, int high) {
        int l=low%2;
        int h=high%2;
        int ans=0;
        if(l==1 & h==1){
            ans=(high-low)/2+1;
        }
        else if(l==0 && h==0){
            ans=(high-low)/2;
        }
        else{
            ans=(high-low)/2+1;
        }
        return ans;
        
    }
};