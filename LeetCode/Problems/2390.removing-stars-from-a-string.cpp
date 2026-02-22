/*
 * @lc app=leetcode id=2390 lang=cpp
 *
 * [2390] Removing Stars From a String
 */

// @lc code=start
class Solution {
public:
    string removeStars(string s) {
        string kq;
        for(char x : s){
            if(x=='*') {
                kq.pop_back();
                continue;
            }
            kq.push_back(x);
        }
        return kq;
    }
};
// @lc code=end

