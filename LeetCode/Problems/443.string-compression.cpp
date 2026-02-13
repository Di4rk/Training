/*
 * @lc app=leetcode id=443 lang=cpp
 *
 * [443] String Compression
 */

// @lc code=start
class Solution {
public:
    int compress(vector<char>& chars) {
        int write=0;
        int i =0;
        while (i < chars.size()){
            int j = i;
            while(j < chars.size() && chars[j] == chars[i]) j++;
            chars[write++] = chars[i];
            if(j-i>1){
                string countStr = to_string(j-i);
                for (char c : countStr) chars[write++] = c;
            }
            i = j;
        }
        return write;
    }
};
// @lc code=end

