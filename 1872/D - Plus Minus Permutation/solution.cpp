#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; 
    cin >> t; 
 
    while(t--){
        long long n, x, y;
        cin >> n >> x >> y;
 
        long long lc = (x / gcd(x, y)) * y;
 
        long long forx = n / x; 
        long long fory = n / y;
        long long com  = n / lc; 
 
        forx -= com; 
        fory -= com;
 
        // sum of largest "forx" numbers from n
        long long big = forx * (2LL * n - forx + 1) / 2;
 
        // sum of smallest "fory" numbers
        long long small = fory * (fory + 1) / 2;
 
        long long ans = big - small;
 
        cout << ans << endl;
    }
 
    return 0;
}