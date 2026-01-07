
1. Maximum Product of Splitted Binary Tree 

class Solution {
public:
    long long sum=0;
    long long maxmprdt=0;
    const int MOD=1e9+7;
    long long dfs(TreeNode* root){
        if(!root) return 0;
        long long lsum=dfs(root->left);
        long long rsum=dfs(root->right);
        long long cursum=root->val+lsum+rsum; // Postorder used here to find sum with left,right,root    
        long long compsum=sum-cursum;
        maxmprdt=max(maxmprdt,cursum*compsum);
        return cursum;
    }
    int maxProduct(TreeNode* root) {
        sum=dfs(root);  
        dfs(root);            
        return maxmprdt%MOD;
    }
};



