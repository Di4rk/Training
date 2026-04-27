#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

   long long n;
   cin >> n;
   
   int count = 0;
   count += n / 100;
   n %= 100;
   count += n / 20;
   n %= 20;
   count += n / 10;
   n %= 10;
   count += n / 5;
   n %= 5;
   count += n / 1;
   cout << count;
   return 0;
}