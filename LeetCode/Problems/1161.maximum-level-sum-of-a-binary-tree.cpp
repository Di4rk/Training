/*
 * @lc app=leetcode id=1161 lang=cpp
 *
 * [1161] Maximum Level Sum of a Binary Tree
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
    int maxLevelSum(TreeNode* root) {
        if(!root) return 0;
        int maxval = INT_MIN, level = 0,j = 1;
        queue<TreeNode*> p;
        p.push(root);
        while(!p.empty()){
            int size = p.size();
            int currsum = 0;
            for(int i = 0;i<size;i++){
                currsum += p.front()->val;
                if(p.front()->left) p.push(p.front()->left);
                if(p.front()->right) p.push(p.front()->right);
                p.pop();                
            }
            if(maxval < currsum){
                maxval = currsum;
                level = j;
            }
            j++;
        }
        return level;
    }
};
// @lc code=end

