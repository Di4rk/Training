#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string a;
        getline(cin,a);
        if(a.size() > 10) {
            cout << a[0] << a.size() - 2 << a[a.size() - 1] << "\n";
        }
        else cout << a << "\n";
    }

    return 0;
}