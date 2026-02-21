/*
 * @lc app=leetcode id=437 lang=cpp
 *
 * [437] Path Sum III
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
    unordered_map<long long, int> prefixMap;
    int target;
    int dfs(TreeNode* node, long long currentsum){
        if(!node) return 0;
        int count = 0;
        currentsum += node->val;
        long long oldprefix = currentsum - target;
        if(prefixMap.count(oldprefix)){
            count+= prefixMap[oldprefix];
        }
        prefixMap[currentsum]++;
        count += dfs(node->left, currentsum);
        count += dfs(node->right, currentsum);
        prefixMap[currentsum]--;
        return count;
    }
    int pathSum(TreeNode* root, int targetSum) {
        target = targetSum;
        prefixMap[0] = 1;
        return dfs(root, 0);
    }
};
// @lc code=end

