#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    char s[55];
    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        cin >> s[i];
        if(i != 0 && s[i-1] == s[i]) cnt++;
    }
    cout << cnt;
    return 0;
}