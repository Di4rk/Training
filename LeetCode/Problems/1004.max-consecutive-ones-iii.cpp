/*
 * @lc app=leetcode id=1004 lang=cpp
 *
 * [1004] Max Consecutive Ones III
 */

// @lc code=start
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, right = 0;
        while(right < nums.size()){
            if(!nums[right]) k--;
            if(k<0){
                if(!nums[left]) k++;
                left++;
            }
            right++;
        }
        return right-left;
    }
};
// @lc code=end

