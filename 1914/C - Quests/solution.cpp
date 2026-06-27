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
    int n ,  k ; 
    cin >> n >> k ; 
    vi a(n)  , b(n); 
    for(int i = 0 ; i< n ; i++) cin >> a[i] ;
    for(int i = 0 ; i< n ; i++) cin >> b[i] ;
    long long  ans = 0 ; 
    int sum = 0 ; 
    int prev = 0 ; 
    for(int i = 0 ; i< min(n , k) ;i++){
        prev = max(prev , b[i]) ; 
        sum += a[i] ; 
        ans = max(ans , sum *1LL + prev*1LL *(k-i-1) ) ; 
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