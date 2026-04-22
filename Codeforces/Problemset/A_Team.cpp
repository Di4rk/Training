#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int current = 0;
    while(n--){
        int i = 3;
        int check[i];
        int count = 0;
        while(i--){
            cin >> check[i];
            if(check[i] == 1) count++;
        }
        if(count>1) current++;
    }
    cout << current;
    return 0;
}