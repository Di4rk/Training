/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start
class Solution {
public:
    string reverseVowels(string s) {
        vector<int> reverse;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') reverse.push_back(i);
        }
        for(int i = 0;i<reverse.size()/2;i++){
            swap(s[reverse[i]],s[reverse[reverse.size()-1-i]]);
        }
        return s;
    }
};
// @lc code=end

