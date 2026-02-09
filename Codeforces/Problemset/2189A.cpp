#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, h, l;
    if (!(cin >> n >> h >> l)) return;
    vector<int> a(n);
    int can_be_row = 0;   
    int can_be_col = 0;   
    int valid_nums = 0;  
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        bool is_row = (a[i] <= h);
        bool is_col = (a[i] <= l);
        if (is_row) can_be_row++;
        if (is_col) can_be_col++;
        if (is_row || is_col) valid_nums++;
    }
    cout << min({can_be_row, can_be_col, valid_nums / 2}) << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}