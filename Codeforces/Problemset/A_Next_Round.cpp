#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int list[50];
    int count =0;
    for(int i = 0; i < n; ++i){
        cin >> list[i];
    }
    for(int i = 0; i < n; ++i){
        if(list[i] < list[k] || list[i] <= 0) break;
        count++;
    }
    cout << count;
    return 0;
}