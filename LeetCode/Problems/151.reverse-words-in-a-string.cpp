/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        string kq ="";
        while(ss >> word) words.push_back(word);
        for(int i = words.size()-1;i>=0;i--){
            kq += words[i];
            if (i!=0) kq += " ";
        }
        return kq;
    }
};
// @lc code=end

