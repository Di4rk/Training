#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int j = 0;
        int max = 0;
        for(int i = 1; i <= n; ++i) {
            pair<int, int> x;
            cin >> x.first  >> x.second;
            if(x.first <= 10) {
                if(x.second > max) {
                    max = x.second;
                    j = i;
                }
            }
        }
        cout << j << "\n";

    }

    return 0;
}