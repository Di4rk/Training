/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int currentsum = 0;
        for(int i =0;i<k;i++) currentsum += nums[i];
        double maxAvg = currentsum*1.0 / k;
        for(int i = 0;i<nums.size() - k;i++){
            currentsum += nums[i+k] - nums[i];
            if (maxAvg < currentsum*1.0/k) maxAvg = currentsum*1.0/k;
        }
        return maxAvg;
    }
};
// @lc code=end

