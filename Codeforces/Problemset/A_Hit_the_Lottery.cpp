#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

   long long n;
   cin >> n;
   
   int count = 0;
   while(n){
        while(n >= 100) {
            count++;
            n-=100;
        }
        while(n>=20){
            count++;
            n-=20;
        }
        while(n>=10){
            count++;
            n-=10;
        }
        while(n>=5){
            count++;
            n-=5;
        }
        while(n>=1){
            count++;
            --n;
        }
   }
   cout << count;
   return 0;
}