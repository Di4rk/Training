#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;


bool check(const long long &mid, const vector<long long> &a, long long c) {
    long long sum = 0;
    for(long long s : a) {
        long long side = s + 2 * mid;
        long long area = side * side;
        
        if(c - sum < area) {
            return true;
        }
        sum += area;
    }
    return sum >= c;
}

void solve() {
    int n;
    long long c;
    cin >> n >> c;
    vector<long long> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    long long left = 1, right = INT_MAX;
    long long asn = 1;
    while(left <= right) {
        long long mid = left + (right - left) / 2;
        if(check(mid, a, c) ){
            asn = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }

    }
    cout << asn << "\n";
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    
    while(t--) solve();

    return 0;
}