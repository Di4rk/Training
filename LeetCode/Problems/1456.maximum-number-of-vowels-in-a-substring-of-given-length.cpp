/*
 * @lc app=leetcode id=1456 lang=cpp
 *
 * [1456] Maximum Number of Vowels in a Substring of Given Length
 */

// @lc code=start
class Solution {
public:
    bool isvowel(char s){
        return (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u');
    }
    int maxVowels(string s, int k) {
        int count = 0;
        for(int i=0;i<k;i++){
            if (isvowel(s[i])) count++;
        }
        int maxcount = count;
        for(int i=k;i<s.size();i++){
            if(isvowel(s[i])) count++;
            if(isvowel(s[i-k])) count--;
            if (maxcount < count) maxcount = count;
        }
        return maxcount;

    }
};
// @lc code=end

