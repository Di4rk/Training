/*
 * @lc app=leetcode id=236 lang=cpp
 *
 * [236] Lowest Common Ancestor of a Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return nullptr;
        if(root == q || root == p) return root;
        TreeNode* leftreport = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightreport = lowestCommonAncestor(root->right, p ,q);
        if(leftreport != nullptr && rightreport != nullptr){
            return root;
        }
        return leftreport!=nullptr ? leftreport : rightreport;
    }
};
// @lc code=end

//