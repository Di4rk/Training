#include <iostream>
#include <vector>
#include <map>

using namespace std;



void solve() {
   int n;
   cin >> n;
   map<long long, int> cnt_x, cnt_y, cnt_dia1, cnt_dia2;
   for(int i = 0; i < n; ++i) {
        long long x, y;
        cin >> x >> y;

        cnt_x[x]++;
        cnt_y[y]++;
        cnt_dia1[y - x]++;
        cnt_dia2[y + x]++;
   }
   long long ans = 0;
   for(auto p : cnt_x) ans += p.second * (p.second - 1);
   for(auto p : cnt_y) ans += p.second * (p.second - 1);
   for(auto p : cnt_dia1) ans += p.second * (p.second - 1);
   for(auto p : cnt_dia2) ans += p.second * (p.second - 1);

   cout << ans << "\n";
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}