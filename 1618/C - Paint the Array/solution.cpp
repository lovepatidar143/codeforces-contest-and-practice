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
    long long  n ; 
    cin >> n ; 
    vll a(n) ;
    for(ll i = 0 ; i< n ; i++) cin >> a[i] ; 
    ll g1 = 0 , g2 = 0 ; 
    for(ll i = 0 ; i< n ; i+=2){
        g1 = gcd(g1 , a[i]);
    }
    for(ll i =1 ; i< n ; i+= 2){
        g2 = gcd(g2 , a[i]) ; 
    }
    bool check = true ; 
    for(ll i =1 ; i< n ; i+= 2) {
        if(a[i] %g1 == 0) {
            check =false ; 
            break ; 
        }
    }
    if(check){
        cout << g1 << endl ; 
        return ; 
    }
    check = true ; 
    for(ll i = 0 ; i< n ; i+= 2){
        if(a[i]%g2 == 0) {
            check = false;
            break ;
        }
    }
    if(check){
        cout << g2 << endl ; 
        return ;
    }
    cout << 0 << endl ; 
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