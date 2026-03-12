/*
 * @lc app=leetcode id=2542 lang=cpp
 *
 * [2542] Maximum Subsequence Score
 */

// @lc code=start
class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();

        vector<pair<int,int>> pairs(n);
        for(int i = 0; i < n; i++){
            pairs[i] = {nums2[i],nums1[i]};
        }

        sort(pairs.rbegin(), pairs.rend());

        priority_queue <int, vector<int>, greater<int>> minHeap;
        long long currentSum = 0;
        long long maxScore;

        
    }
};
// @lc code=end

