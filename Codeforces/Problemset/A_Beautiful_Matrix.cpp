#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    int temp;
    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j){
            cin >> temp;
            if(temp) {
                a = i;
                b = j;
            }
        }
    }
    
    cout <<  abs(a - 2) + abs(b - 2);
    return 0;

    
}
