/*
 * @lc app=leetcode id=2352 lang=cpp
 *
 * [2352] Equal Row and Column Pairs
 */

// @lc code=start
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int count = 0;
        map<vector<int>, int> row;
        for(auto x : grid){
            row[x]++;
        }
        for(int j=0;j<n;j++){
            vector<int> col;
            for(int i = 0;i<n;i++){
                col.push_back(grid[i][j]);
            }
            if(row.count(col)) count += row[col];
        }
        return count;
    }
};
// @lc code=end
