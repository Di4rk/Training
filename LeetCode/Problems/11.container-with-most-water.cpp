/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right  = height.size() - 1;
        int maxarea = 0;
        while(left < right){
            if (maxarea < ((right-left)*min(height[left],height[right]))) maxarea = (right-left)*min(height[left],height[right]);
            if(height[left] <= height[right]) left++;
            else right--;            
        }
        return maxarea;
    }
};
// @lc code=end

