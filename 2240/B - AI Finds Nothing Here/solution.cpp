#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
 
#define all(x) (x).begin(), (x).end()
#define endl '
'
 
void solve() {
    ll n , m , r , c ; 
    cin >> n >> m >> r >> c ; 
    ll MOD = 998244353 ; 
    long long ans = 1LL ; 
    ll free = (r-1)*m - (r-1)*(c-1) + (c-1)*n ; 
    // ans = (1LL<<free)%MOD ; 
    long long pow = 2 ; 
    while(free > 0){
        if(free &1){
            ans = (ans * pow) %MOD ; 
        }
        pow = (pow * pow) %MOD ; 
        free >>= 1 ; 
        
    }
 
 
 
 
    cout << ans << endl ; 
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