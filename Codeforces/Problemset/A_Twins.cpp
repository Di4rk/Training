#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> list;
    float sum = 0;
    while(n--){
        int a;
        cin >> a;
        list.push_back(a);
        sum+=a; 
    }

    sort(list.begin(), list.end(), greater<int>());
    sum /= 2.0;
    int count = 0;
    for(int i = 0; i < list.size(); ++i){
        count += list[i];
        if(count > sum) {
            cout << i;
            return 0;
        }
    }
    return 0;
}