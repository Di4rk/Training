/*
 * @lc app=leetcode id=399 lang=cpp
 *
 * [399] Evaluate Division
 */

// @lc code=start
class Solution {
public:
    double dfs(string curr, string target, unordered_set<string>& visited, unordered_map<string, vector<pair<string, double>>>& graph){
        if(graph.find(curr) == graph.end() || graph.find(target) == graph.end()) return -1.0;
        if(curr == target) return 1.0;
        visited.insert(curr);
        for(auto& neighbor : graph[curr]){
            string nextnode = neighbor.first;
            double value = neighbor.second;
            if(visited.find(nextnode) == visited.end()){
                double result = dfs(nextnode, target, visited, graph);
                if(result != -1.0) return value * result;
            }
        }
        return -1.0;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
            unordered_map<string, vector<pair<string, double>>> graph;
            for(int i =0; i < equations.size(); i++){
                string u = equations[i][0];
                string v = equations[i][1];
                graph[u].push_back({v,values[i]});
                graph[v].push_back({u,1.0 / values[i]});     
            }
            vector<double> ans;
            for(auto abc : queries){
                string start = abc[0];
                string target = abc[1];
                unordered_set<string> visited;
                ans.push_back(dfs(start, target, visited, graph));
            }
            return ans;
    }
};
// @lc code=end
