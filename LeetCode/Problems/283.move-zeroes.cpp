/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int write =0, count =0;
        for (int i =0;i<nums.size();i++){
            if(nums[i]!=0) {
                nums[write++] = nums[i];
            }
            else count++;
        }
        while(count){
            nums[write++] = 0;
            count--;
        }
        return;
    }
};
// @lc code=end

