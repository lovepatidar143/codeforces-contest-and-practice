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
    int n ; 
    cin >> n ; 
    long long mod = 1e9 + 7 ; 
    long long ans = 1LL ; 
    // ans = (((((n*(n+1)) %mod) * (4*n -1) )%mod )* 337)%mod ; 
    ans = (((((1LL*n*(n+1))%mod)*(4LL*n -1))%mod)*337)%mod ; 
 
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