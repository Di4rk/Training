/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start
class Solution{
public:
    string mergeAlternately(string word1, string word2){
        int m = word1.size(), n = word2.size();
        string kq = "";
        kq.reserve(m+n);
        int i = 0, j =0;
        while(i<m || j<n){
            if(i < m) kq += word1[i++];
            if(j<n) kq += word2[j++];
        }
        return kq;
    }
};
// @lc code=end

