/*
 * @lc app=leetcode id=1207 lang=cpp
 *
 * [1207] Unique Number of Occurrences
 */

// @lc code=start
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> count;
        for(int x : arr) count[x]++;
        unordered_set<int> check;
        for(auto x : count){
            int onetime = x.second;
            if(check.count(onetime)) return false;
            check.insert(onetime);
        }
        return true;
    }
};
// @lc code=end

