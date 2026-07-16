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
    int n , m ; 
    cin >> n >> m ; 
    vector<int> a(n) , b(m); 
    for(int i = 0 ; i< n ; i++ ) cin >> a[i] ; 
    for(int i = 0 ; i < m ; i++) cin >> b[i] ; 
    sort(b.begin() , b.end()) ; 
    long long ans1 = 0LL ;
    long long ans2 = 0LL ;
    long long ans = 0LL ; 
    int prev = 0 ; 
    for(auto it : b){
        long long sub = 0 ; 
        for(int i = prev ; i < it ; i++){
            sub = sub + a[i] ; 
        }
        ans += abs(sub) ; 
        prev = it ; 
    }
    ll sub = 0 ;
    for(int i = prev ; i < n ; i++){
        sub+=a[i] ; 
    } 
    // long long ans = max(ans1 , ans2) ; 
    ans += sub ; 
 
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