#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a,b;
    cin >> a >> b;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] >= 'a') a[i] -= 32;
        if(b[i] >= 'a') b[i] -= 32;
        if (a[i] < b[i]) {
            cout << -1;
            return 0;
        } 
        else if(a[i] > b[i]) {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}