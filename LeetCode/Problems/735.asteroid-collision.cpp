/*
 * @lc app=leetcode id=735 lang=cpp
 *
 * [735] Asteroid Collision
 */

// @lc code=start
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> kq;
        for(int x : asteroids){
            bool alive = true;
            while(!kq.empty() && kq.back() > 0 && x<0){
                if(kq.back() < -x){
                    kq.pop_back();
                    continue;
                } 
                else if(kq.back() + x ==0){
                    kq.pop_back();
                    alive = false;
                }
                else alive = false;
                break;
            }
            if (alive) kq.push_back(x);
        }
        return kq;
    }
};
// @lc code=end

