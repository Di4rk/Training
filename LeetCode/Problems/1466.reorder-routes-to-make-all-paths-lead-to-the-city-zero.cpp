/*
 * @lc app=leetcode id=1466 lang=cpp
 *
 * [1466] Reorder Routes to Make All Paths Lead to the City Zero
 */

// @lc code=start
class Solution {
        int dfs(int node, int parent, vector<vector<pair<int,int>>>& adj){
            int totalSwaps=0;
            for(auto& edge : adj[node]){
                int neighbor = edge.first;
                int cost = edge.second;
                if(neighbor != parent){
                    totalSwaps += cost + dfs(neighbor, node, adj);
                }
            }
            return totalSwaps;
        }
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int,int>>> adj(n);
        for(auto& conn : connections){
            int u = conn[0];
            int v = conn[1]; 
            adj[u].push_back({v,1});
            adj[v].push_back({u,0});
        }
        return dfs(0,-1,adj);
    }
};
// @lc code=end

