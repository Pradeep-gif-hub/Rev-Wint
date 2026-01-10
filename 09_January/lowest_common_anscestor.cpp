/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* root){
        if(root==nullptr) return 0;
        return 1+max(dfs(root->left),dfs(root->right));
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(root==nullptr) return nullptr;
        int leftdepth=dfs(root->left);
        int rightdepth=dfs(root->right);
        if(leftdepth==rightdepth) return root;
        return (leftdepth>rightdepth)?lcaDeepestLeaves(root->left):
        lcaDeepestLeaves(root->right);
    }
};