/*
 * @lc app=leetcode id=872 lang=cpp
 *
 * [872] Leaf-Similar Trees
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
    // Hàm trinh sát: Đi sâu xuống tận cùng để nhặt lá
    void getLeaves(TreeNode* node, vector<int>& leaves) {
        if (node == nullptr) return;
        
        // Cú chốt: Nếu node này không có con trái & phải -> Chính là lá!
        if (node->left == nullptr && node->right == nullptr) {
            leaves.push_back(node->val);
        }
        
        // Bắt buộc rẽ trái trước, sau đó mới rẽ phải để đúng thứ tự left-to-right
        getLeaves(node->left, leaves);
        getLeaves(node->right, leaves);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves1, leaves2;
        
        // Cho đệ quy đi gom lá của cả 2 cây
        getLeaves(root1, leaves1);
        getLeaves(root2, leaves2);
        
        // Phép thuật của C++: So sánh 2 mảng trực tiếp luôn
        return leaves1 == leaves2;
    }
};
// @lc code=end

