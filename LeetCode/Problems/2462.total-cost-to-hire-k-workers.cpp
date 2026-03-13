/*
 * @lc app=leetcode id=2462 lang=cpp
 *
 * [2462] Total Cost to Hire K Workers
 */

// @lc code=start
class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int, vector<int>, greater<int>> qp_left, qp_right;
        long long n = costs.size();
        
        long long left = 0;
        long long right = n - 1;

        long long ans = 0;
        while(k--){
            while(qp_left.size() < candidates && left <= right){
                qp_left.push(costs[left]);
                left++;
            }

            while(qp_right.size() < candidates && left <= right){
                qp_right.push(costs[right]);
                right--;
            }

            long long currentCostLeft = qp_left.top();
            long long currentCostRight = qp_right.top();

            if(currentCostLeft <= currentCostRight){
                ans += currentCostLeft;
                qp_left.pop();
            }
            else {
                ans += currentCostRight;
                qp_right.pop();
            }
        }
        return ans;
    }
};
// @lc code=end

