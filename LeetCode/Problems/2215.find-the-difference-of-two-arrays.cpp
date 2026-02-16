/*
 * @lc app=leetcode id=2215 lang=cpp
 *
 * [2215] Find the Difference of Two Arrays
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());
        vector<int> dif1,dif2;
        for(int x : s1){
            if(s2.count(x) == 0){
                dif1.push_back(x);
            }
        }
        for(int x : s2){
            if(s1.count(x) == 0){
                dif2.push_back(x);
            }
        }
        return {dif1,dif2};
    }
};
// @lc code=end

