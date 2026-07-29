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
    ll n , q ; 
    cin >> n >> q ; 
    vll a(n) ; 
    for(int i = 0 ; i< n ; i++) cin >> a[i] ;
    vll x(q);
    for(int i = 0 ; i < q ; i++) cin >> x[i] ;
    vll ans(n) ; 
    for(int i = 0 ;i < n ; i++) ans[i] = a[i] ; 
    long long  min_x = LLONG_MAX ; 
    for(auto it : x){
        if(it >= min_x) continue ; 
        min_x = min(it , min_x) ; 
        int num = (1<<it) ;
        it--;
        int add = (it == 0) ? 1 : (1<<it) ;
        for(int i = 0 ; i< n ; i++){
            if(ans[i]%num == 0){
                ans[i]+= add ;
            }
        }
    }
 
    for(int i = 0 ; i< n ; i++) cout << ans[i] << " " ; 
    cout << endl ; 
 
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