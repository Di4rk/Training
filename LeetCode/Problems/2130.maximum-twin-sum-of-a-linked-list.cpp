/*
 * @lc app=leetcode id=2130 lang=cpp
 *
 * [2130] Maximum Twin Sum of a Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        vector<int> twinsum;
        while(fast != nullptr && fast->next != nullptr){
            twinsum.push_back(slow->val);
            slow=slow->next;
            fast=fast->next->next;
        }
        int ans = 0;
        int n = twinsum.size();
        while(n){
            ans = max(ans, twinsum[--n] + slow->val);
            slow=slow->next;
        }
        return ans;
    }
};
// @lc code=end
