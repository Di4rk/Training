#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--) {
        long n, k;
        cin >> n >> k;
        vector<int> list(n);
        for(int i = 0; i < n; ++i) {
            cin >> list[i];
        }

        if(n <= 2) {
            cout << 0 << "\n";
            continue;
        }
        sort(list.begin(), list.end());

        int max_length = 1;
        int current_length = 1;
        for(int i = 1; i < n; ++i) {
            if(list[i] - list[i - 1]  <= k) {
                current_length++;
            }
            else current_length = 1;
            max_length = max(current_length, max_length);
        }
        cout << n - max_length << "\n";
    }

    return 0;
}