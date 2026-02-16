/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumnow =0, sumall =0;
        for(int x : nums){
            sumall += x;
        }   
        for(int i =0;i<nums.size();i++){
            if(sumnow == sumall - nums[i] - sumnow) return i;
            sumnow += nums[i];
        }
        return -1;
    }
};
// @lc code=end

