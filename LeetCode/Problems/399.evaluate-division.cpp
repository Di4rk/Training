/*
 * @lc app=leetcode id=399 lang=cpp
 *
 * [399] Evaluate Division
 */

// @lc code=start
class Solution {
public:
    // HÀM 1: ĐỆ QUY (Đi dò đường và tính tỷ giá)
    double dfs(string curr, string target, unordered_set<string>& visited, unordered_map<string, vector<pair<string, double>>>& graph) {
        
        // Base case 1: Biến ảo ma, không có trong sổ tỷ giá
        if (graph.find(curr) == graph.end() || graph.find(target) == graph.end()) {
            return -1.0; 
        }
        
        // Base case 2: Đến đích! (Tỷ giá tự đổi ra chính nó là 1.0)
        if (curr == target) {
            return 1.0; 
        }

        // Đánh dấu đồng tiền này là "đã cầm", tránh đi vòng tròn
        visited.insert(curr);

        // Khám phá hàng xóm (Đi hỏi các đồng tiền có thể đổi tiếp)
        for (auto& neighbor : graph[curr]) {
            string next_node = neighbor.first;
            double weight = neighbor.second;

            // Nếu đồng này chưa bị đánh dấu
            if (visited.find(next_node) == visited.end()) {
                
                // ĐÙN ĐẨY: Gọi đệ quy nhờ thằng hàng xóm đi tìm đích
                double result = dfs(next_node, target, visited, graph);
                
                // NHẬN KẾT QUẢ: Nếu thằng hàng xóm tìm được đường (khác -1.0)
                if (result != -1.0) {
                    return weight * result; // Chốt tỷ giá!
                }
            }
        }

        // Nếu hỏi hết hàng xóm mà vẫn không tìm ra đích
        return -1.0;
    }

    // HÀM 2: HÀM CHÍNH (Xử lý input và output)
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        
        // 1. Tạo cuốn sổ tỷ giá (Đồ thị)
        unordered_map<string, vector<pair<string, double>>> graph;

        // 2. Nhập dữ liệu vào sổ
        for (int i = 0; i < equations.size(); i++) {
            string u = equations[i][0];
            string v = equations[i][1];
            double val = values[i];

            // Chiều đi: u ra v tỷ giá là val
            graph[u].push_back({v, val});
            // Chiều ngược: v về u tỷ giá là 1.0 / val
            graph[v].push_back({u, 1.0 / val});
        }

        vector<double> results;

        // 3. Giải quyết từng câu hỏi (Queries)
        for (auto& q : queries) {
            string c = q[0];
            string d = q[1];
            
            // Mỗi lần hỏi phải tạo một cuốn sổ tay visited mới tinh
            unordered_set<string> visited;
            
            // Gọi hàm đệ quy rồi nhét kết quả vào mảng đáp án
            results.push_back(dfs(c, d, visited, graph));
        }

        return results;
    }
};
// @lc code=end

abb