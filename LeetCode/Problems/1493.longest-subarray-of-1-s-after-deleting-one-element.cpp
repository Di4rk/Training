/*
 * @lc app=leetcode id=1493 lang=cpp
 *
 * [1493] Longest Subarray of 1's After Deleting One Element
 */

// @lc code=start
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, right = 0;
        int k = 1;
        while(right < nums.size()){
            if(!nums[right]) k--;
            if(k<0){
                if(!nums[left]) k++;
                left++;
            }
            right++;
        }
        return right-left - 1;
    }
};
// @lc code=end

