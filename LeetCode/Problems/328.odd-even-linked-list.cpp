/*
 * @lc app=leetcode id=328 lang=cpp
 *
 * [328] Odd Even Linked List
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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr) return nullptr;
        ListNode* first = head;
        ListNode* second = head->next;
        ListNode* headsecond = second;
        while (first->next != nullptr && first->next->next != nullptr){
            first->next=first->next->next;
            second->next = second->next->next;
            first=first->next;
            second=second->next;
        }
        first->next = headsecond;
        return head;
    }
};
// @lc code=end

