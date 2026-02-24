/*
 * @lc app=leetcode id=841 lang=cpp
 *
 * [841] Keys and Rooms
 */

// @lc code=start
class Solution {
public:
    void dfs(int currentRoom, vector<vector<int>>& rooms, vector<bool>& visited){
        visited[currentRoom] = true;
        for(int key : rooms[currentRoom]){
            if(visited[key] == false) dfs(key, rooms, visited);
        }
        return;
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n,false);
        dfs(0, rooms, visited);
        for(bool status : visited){
            if(!status) return false;
        }
        return true;
    }
};
// @lc code=end

