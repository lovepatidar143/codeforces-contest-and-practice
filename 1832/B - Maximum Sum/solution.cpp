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
    ll n , k ; 
    cin >> n >> k ; 
    vll a(n) ; 
    for(int i = 0 ; i< n ; i++) cin >> a[i] ; 
 
    sort(all(a)) ;
    vll pref(n+1) ; 
    pref[0] = a[0] ; 
    for(int i = 1 ; i< n ; i++) {
        pref[i] = pref[i-1] + a[i] ;
    }
    pref[n] = pref[n-1] ; 
    long long ans = LLONG_MIN ; 
    ll i = 2LL*k -1 , j = n; 
 
    while(i >0){
        long long sum = pref[j-1] - pref[i] ;
        ans = max(ans , sum) ; 
        i -= 2 ; 
        j -- ;
    }
    ans = max(ans , pref[j-1]) ; 
 
 
 
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