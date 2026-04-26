#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a,b;
    cin >> a >> b;
    int suma = 0, sumb = 0;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] >= 'a') suma += a[i] - 32;
        else suma += a[i];
        if(b[i] >= 'a') sumb += b[i] - 32;
        else sumb += b[i];
    }

    if(suma > sumb) cout << 1;
    else if (suma == sumb) cout << 0;
    else cout << -1;

    return 0;
}