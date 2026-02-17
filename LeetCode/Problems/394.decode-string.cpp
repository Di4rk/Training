/*
 * @lc app=leetcode id=394 lang=cpp
 *
 * [394] Decode String
 */

// @lc code=start
class Solution {
public:
    string decodeString(string s) {
        stack<string> chuoiDaLuu; // Lưu chuỗi phía trước dấu '['
        stack<int> soLanLap;      // Lưu số k
        string chuoiHienTai = ""; 
        int k = 0;

        for (char c : s) {
            // 1. Nếu là số (xử lý cả trường hợp số có nhiều chữ số như 10, 100...)
            if (isdigit(c)) {
                k = k * 10 + (c - '0');
            }
            // 2. Nếu là dấu '[' -> Bắt đầu một đoạn mã hóa mới
            else if (c == '[') {
                soLanLap.push(k);           // Cất số k vào kho
                chuoiDaLuu.push(chuoiHienTai); // Cất chuỗi đang làm dở vào kho
                
                // Reset để bắt đầu xử lý đoạn trong ngoặc []
                k = 0;
                chuoiHienTai = "";
            }
            // 3. Nếu là dấu ']' -> Kết thúc đoạn mã hóa, bung lụa
            else if (c == ']') {
                string chuoiTam = chuoiHienTai;
                
                // Lấy số lần lặp từ kho ra
                int count = soLanLap.top(); 
                soLanLap.pop();
                
                // Lấy cái chuỗi cũ (trước dấu [) ra
                string chuoiCu = chuoiDaLuu.top(); 
                chuoiDaLuu.pop();
                
                // Nối chuỗi cũ với chuỗi trong ngoặc được lặp lại k lần
                chuoiHienTai = chuoiCu;
                while (count--) {
                    chuoiHienTai += chuoiTam;
                }
            }
            // 4. Nếu là chữ cái bình thường
            else {
                chuoiHienTai += c;
            }
        }
        return chuoiHienTai;
    }
};
// @lc code=end

