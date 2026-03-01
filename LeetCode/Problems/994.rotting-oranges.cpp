/*
 * @lc app=leetcode id=994 lang=cpp
 *
 * [994] Rotting Oranges
 */

// @lc code=start
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int,int>> q;
        int fresh_count = 0;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(gird[i][j] == 2) q.push_back({i,j});
                else if (grid[i][j]==1) fresh_count++;
            }
        }
    if (!fresh_count) return 0;
    vector<pair<int,int>> directions = {{-1,0},{1,0},{0,-1},{0,1}};
    int minutes = 0;
    while(!q.empty() && fresh_count>0){
        int current_q_size = q.size();
        for(int i = 0; i< current_q_size;i++){
            auto [r,c] = q.front();
            q.pop();
            for(auto dir : directions){
                int nextr = r + dir.first;
                int nextc = c + dir.sencond;
                if(nextr>=0 && nextr < m && nextc >= 0 && nextc < n && gird[nextr][nextc] == 1){
                    q.push_back({nextr,nextc});
                    gird[nextr][nextc] == 2;
                    fresh_count--;
                }                
            }
        }
        minutes++;
    }
    return fresh_count == 0 ? minutes : -1;
}
};
// @lc code=end

