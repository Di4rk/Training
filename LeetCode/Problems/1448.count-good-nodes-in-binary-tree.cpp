/*
 * @lc app=leetcode id=1448 lang=cpp
 *
 * [1448] Count Good Nodes in Binary Tree
 */

// @lc code=start
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
    int dfs(TreeNode* node, int maxval){
        if(node == nullptr) return 0;
        int count = 0;
        if(node->val >= maxval){
            count =1;
            maxval = node->val;
        }
        count += dfs(node->left, maxval);
        count += dfs(node->right, maxval);
        return count;
    }
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        return dfs(root, root->val);       
    }
};
// @lc code=end

