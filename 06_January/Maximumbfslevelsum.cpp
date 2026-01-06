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
// 
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if(root==nullptr) return 0;
        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);
        int curlvl=1;
        int lvlmxmsum=1;
        long long sum=LLONG_MIN;
        while(!nodesQueue.empty()){
            int nodeslevel=nodesQueue.size();
            long long levelsum=0;
            for (int i=0;i<nodeslevel;i++){
                TreeNode* currentNode=nodesQueue.front();
                nodesQueue.pop();
                levelsum+=currentNode->val;
                if(currentNode->left)
                    nodesQueue.push(currentNode->left);
                if (currentNode->right)
                    nodesQueue.push(currentNode->right);
            }
            if (levelsum>sum) {
                sum=levelsum;
                lvlmxmsum=curlvl;
            }
            curlvl++;
        }
        return lvlmxmsum;
    }
};

//class Solution {
// public:
//     int maxLevelSum(TreeNode* root) {
//         if(root==nullptr) return 0;
//         int currlevel=1;
//         int maxm=1;
//         long long sum=LLONG_MIN;
//         queue<TreeNode*>q;
//         while(!q.empty()){
//             int n=q.size();
//             long long sum=0;
//             for(int i=0;i<n;i++){
//                 TreeNode* currnode=q.front();
//                 q.pop();
//                 sum+=currnode->val;
//                 if(currnode->left){
//                     q.push(currnode->left);
//                 }
//                 if(currnode->right){
//                     q.push(currnode->right)
//                 }
//             }
//             if(lvlsum>sum){
//                 sum=levlsum;
//                 lvlmxm=currlvl;
//             }
//             curlvl++;
//         }
//         return lvlmxm;
//     }
// };
