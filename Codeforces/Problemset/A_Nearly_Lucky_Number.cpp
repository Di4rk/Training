#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin >> n;
    int x = 0;
    for(auto a : n) {
        if(a == '4' || a == '7') {
            x++;
            continue;
        }
    }

    if(x == 4 || x == 7) {
        cout << "YES";
        return 0;
    }

    cout << "NO";
    return 0;

}