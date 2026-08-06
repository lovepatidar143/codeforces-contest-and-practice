#include <bits/stdc++.h>
#include <numeric>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
 
#define all(x) (x).begin(), (x).end()
#define endl '
'
void solve() {
    int n ; 
    cin >> n ; 
    vector<int> a(n) ; 
    for(int i = 0 ; i< n;  i++) cin >> a[i] ; 
 
    int ans = 0 ;
 
 
    // if(check){
    //     cout << 0 << endl ; 
    //     return ; 
    // }
 
    for(int i = 0 ; i < n/2 ; i++){
        ans = __gcd(ans ,abs(a[i] -a[n-i-1])) ; 
    }
    cout << ans <<endl; 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
        solve();
 
    return 0;
}