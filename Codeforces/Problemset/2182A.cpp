#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s.find("2025") != string::npos && s.find("2026") == string::npos) cout << '1' << endl;
    else cout << '0' << endl;
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}