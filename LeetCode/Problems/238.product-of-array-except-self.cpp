/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) { 
        int n = nums.size();
        vector<int> kq(n,1);
        for(int i =1;i<n;i++) kq[i] = kq[i-1] * nums[i-1];
        int r=1;
        for(int i=n-1;i>=0;i--){
            kq[i]*=r;
            r*=nums[i];
        }
        return kq;
    }
};
// @lc code=end

