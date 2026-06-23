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
    vector<int>dfs(TreeNode* node){
        if(!node){return {1,0};}
        auto left=dfs(node->left);
        auto right=dfs(node->right);
        bool bal=(left[0]==1 && right[0]==1 && abs(left[1]-right[1])<=1);
        return {bal,1+max(left[1],right[1])};

    }
    bool isBalanced(TreeNode* root) {
         vector<int>b=dfs(root);
         return b[0];
    }
};
