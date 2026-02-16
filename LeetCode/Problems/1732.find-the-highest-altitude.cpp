/*
 * @lc app=leetcode id=1732 lang=cpp
 *
 * [1732] Find the Highest Altitude
 */

// @lc code=start
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAl = 0;
        int summ = 0;
        for(int i =0;i<gain.size();i++){
            summ += gain[i];
            maxAl = max(maxAl, summ);
        }
        return maxAl;
    }
};
// @lc code=end
