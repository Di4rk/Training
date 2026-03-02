/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */

// @lc code=start
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int , vector<int>, greater<int>> LargestNums;
        for(int n : nums){
            int i = LargestNums.size();
            if(i>=k) {
                LargestNums.push(n);
                LargestNums.pop();
            }
            else 
                LargestNums.push(n);
        }
        return LargestNums.top();
    }
};
// @lc code=end

