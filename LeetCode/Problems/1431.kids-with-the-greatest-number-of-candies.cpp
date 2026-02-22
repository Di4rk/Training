/*
 * @lc app=leetcode id=1431 lang=cpp
 *
 * [1431] Kids With the Greatest Number of Candies
 */
// @lc code=start
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxcandies = 0;
        for(int i =0;i<candies.size();i++){
            if(candies[i] > maxcandies) maxcandies = candies[i];
        }
        vector<bool> kq;
        for(int i=0;i<candies.size();i++){
            bool check = (candies[i] + extraCandies >= maxcandies);
            kq.push_back(check);
        }
        return kq;
    }
};
// // // @lc code=end

