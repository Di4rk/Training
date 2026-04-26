#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a;
    cin >> a;
    int low = 0, up = 0;
    for(auto x : a){
        if(x < 'a') up++;
        else low++; 
    }

    if(low >= up){
        for(char x : a){
            if(x < 'a') cout << (char)(x + 32);
            else cout << x;
        }
    }
    else {
        for(char x : a){
            if(x >= 'a') cout << (char)(x - 32);
            else cout << x;
        }
    }

    return 0;
}