#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--) {
        vector<char> result;

        for(int i = 0; i < 8; ++i) {
            for(int j = 0; j < 8; ++j) {
                char x;
                cin >> x;
                if(x != '.') {
                    result.push_back(x);
                }
            }
        }
        for(char a : result) {
            cout << a;
        }
        cout << "\n";
    }

    return 0;
}