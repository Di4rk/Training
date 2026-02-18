/*
 * @lc app=leetcode id=394 lang=cpp
 *
 * [394] Decode String
 */

// @lc code=start
class Solution {
public:
    string decodeString(string s) {
        stack<string> strStored;
        stack<int> time;
        string kq = "";
        int k=0;
        for(char c : s){
            if(isdigit(c)){
                k = k *10 + (c - '0');
            }
            else if(c == '['){
                time.push(k);
                strStored.push(kq);
                k=0;
                kq="";
            }
            else if (c== ']'){
                string sub = kq;
                int count = time.top();
                time.pop();
                string oldStr = strStored.top();
                strStored.pop();
                kq = oldStr;
                while(count--) kq += sub;
            }
            else kq += c;
        }
        return kq;
    }
};
// @lc code=end

