#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string sum;
    cin >> sum;
    int count[4];
    for(int &x : count) x = 0;
    for(char x : sum){
        if(x == '1') count[1]++;
        else if(x == '2') count[2]++;
        else if(x == '3') count[3]++;
        else count[0]++;
    }

    bool first = true;
    for(int i = 1; i <= 3; ++i) {
        while(count[i]--) {
            if(!first) cout << "+";
            cout << i;
            first = false;
        }
    }

    return 0;
}