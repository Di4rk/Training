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

        for(int i = 0; i < n; i++){
            int currentNum1 = pairs[i].second();
            int currentNum2 = pairs[i].first();
            minHeap.push(currentNum1);
            currentSum += currentNum1;

            if(minHeap.size() > k){
                currentSum -= minHeap.top();
                minHeap.pop();
            }

            if(minHeap.size() == k){
                maxScore = max(maxScore, currentSum * currentNum2);
            }
        }        
    }
};
// @lc code=end

