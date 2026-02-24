/*
 * @lc app=leetcode id=547 lang=cpp
 *
 * [547] Number of Provinces
 */

// @lc code=start
class Solution {
public:
    void dfs(int node, vector<vector<int>>& isConnected, vector<bool>& visited){
        visited[node] = true;
        for(int neighbor = 0; neighbor<isConnected.size(); neighbor++){
            if(isConnected[node][neighbor] == 1 && !visited[neighbor]) 
                dfs(neighbor, isConnected, visited);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int provinces = 0;
        vector<bool> visited(n,false);
        for(int city = 0; city<n;city++){
            if(!visited[city]){
                provinces++;
                dfs(city, isConnected, visited);
            }
        }
        return provinces;
    }
};
// @lc code=end

//