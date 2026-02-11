/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()) return findMedianSortedArrays(nums2,nums1);
        int x= nums1.size(), y = nums2.size();
        int low=0;
        int high = x;
        while(low <= high){
            int midX = (low + high)/2;
            int midY = (x+y+1)/2 - midX;
            int maxLX = (midX == 0) ? INT_MIN : nums1[midX-1];
            int minRX = (midX == x) ? INT_MAX : nums1[midX];
            int maxLY = (midY == 0) ? INT_MIN : nums2[midY-1];
            int minRY = (midY == y) ? INT_MAX : nums2[midY];
            if (maxLX <= minRY && maxLY <= minRX){
                if ((x+y)%2 == 0){
                    return (max(maxLX,maxLY) + min(minRX,minRY)) / 2.0;
                }
                else return max(maxLX,maxLY);
            }
            else if (maxLX > minRY){
                high = midX - 1;
            }
            else low = midX + 1;
        }
        return 0.0;
    }
};
// @lc code=end
