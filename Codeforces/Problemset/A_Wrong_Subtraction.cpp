#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    while(k>0){
        int x = n % 10;
        if(k - x <= 0) {
            n -= k;
            break;
        }
        else {
            k -= x + 1;
            n /= 10;
        }
    }
    cout << n;
    return 0;
}
