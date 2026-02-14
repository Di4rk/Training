/*
 * @lc app=leetcode id=1679 lang=cpp
 *
 * [1679] Max Number of K-Sum Pairs
 */

// @lc code=start
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        std::sort(nums.begin(),nums.end());
        int left = 0, right = nums.size() -1;
        int count =0;
        while(left < right){
            int sum = nums[left] + nums[right];
            if (sum > k) right--;
            else if (sum < k) left++;
            else {
                right--;
                left++;
                count++;
            }
        }
        return count;
    }
};
// @lc code=end

