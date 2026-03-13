/*
 * @lc app=leetcode id=374 lang=cpp
 *
 * [374] Guess Number Higher or Lower
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 0;
        int right = n-1;
        int mid = left + (right - left)/2;
        int result = guess(mid);
        while(result != 0){
            mid = left + (right - left)/2;
            result = guess(mid);
            if(result == 1){
                left = mid + 1;
            }
            if(result == -1){
                right = mid - 1;
            }
        }        
        return mid;
    }
};
// @lc code=end

