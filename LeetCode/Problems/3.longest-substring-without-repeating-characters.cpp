/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastindex(128,-1);
        int maxl = 0;
        int left = 0;
        for(int right = 0;right<s.size();right++){
            char current = s[right];
            if(lastindex[current] >= left) left = lastindex[current] + 1;
            lastindex[current] = right;
            maxl = max(maxl, right - left + 1);
        }
        return maxl;
    }
};
// @lc code=end

