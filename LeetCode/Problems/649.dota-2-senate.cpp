/*
 * @lc app=leetcode id=649 lang=cpp
 *
 * [649] Dota2 Senate
 */

// @lc code=start
class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> radient;
        queue<int> dire;
        int n = senate.size();
        for(int i=0;i<senate.size();i++){
            if(senate[i] == 'R') radient.push(i);
            else dire.push(i);
        }
        while(!radient.empty() && !dire.empty()){
            if(radient.front() < dire.front()){
                radient.push(radient.front()+n);
                radient.pop();
                dire.pop();
            }
            else {
                dire.push(dire.front()+n);
                radient.pop();
                dire.pop();
            }
        }
        return (radient.empty()) ? "Dire" : "Radiant"; 
    }
};
// @lc code=end
// 