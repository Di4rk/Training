/*
 * @lc app=leetcode id=1926 lang=cpp
 *
 * [1926] Nearest Exit from Entrance in Maze
 */

// @lc code=start
class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int i = maze.size();
        int j = maze[0].size();
        int dx[]= {-1,1,0,0};
        int dy[]= {0,0,1,-1};
        queue<tuple<int,int,int>> q;
        int startrow = entrance[0];
        int startcol = entrance[1];
        q.push({startrow,startcol,0});
        maze[startrow][startcol] = '+';
        while(!q.empty()){
            auto [r,c,step] = q.front();
            q.pop();
            bool border = (r==0 || r==i -1 || c==0 || c==j -1);
            bool notentrance = (r!=startrow || c!=startcol);
            if(border && notentrance) return step;
            for(int k = 0; k < 4; k++){
                int newrol = r +dy[k];
                int newcol = c + dx[k];
                if(newrol >= 0 && newrol < i && newcol >= 0 && newcol < j && maze[newrol][newcol] == '.'){
                    maze[newrol][newcol] = '+';
                    q.push({newrol,newcol,step + 1});
                }
            }
        }
        return -1;
    }
};
// @lc code=end

