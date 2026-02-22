/*
 * @lc app=leetcode id=1372 lang=cpp
 *
 * [1372] Longest ZigZag Path in a Binary Tree
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
    int max_len = 0;
    void dfs(TreeNode* node, int dirr, int lenght){
        if(!node) return;
        max_len = max(max_len, lenght);
        if(!dirr){
            dfs(node->left, 0, 1);
            dfs(node->right, 1, lenght+1);
        }
        else{
            dfs(node->right, 1, 1);
            dfs(node->left, 0, lenght+1);
        }
    }
    int longestZigZag(TreeNode* root) {
        if(!root) return 0;
        dfs(root->left, 0, 1);
        dfs(root->right, 1, 1);
        return max_len;
    }
};
// @lc code=end

