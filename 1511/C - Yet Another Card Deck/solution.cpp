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
    ll n ,  q; 
    cin >> n >> q ; 
    vector<ll> a(n) ; 
    for(ll i = 0 ; i< n ; i++) cin >> a[i] ; 
    vll t(q) ; 
    for(ll i = 0 ; i < q ; i++) cin >> t[i] ;
    vector<int> first(51 , -1) ;
    for(int i = 0 ; i< n ; i++) {
        if(first[a[i]] == -1) {
            first[a[i]] = i+1 ; 
        }
    }
    vector<int> ans(q) ; 
 
    for(int i = 0 ; i< q ; i++) {
        ans[i] = first[t[i]] ; 
        int cur = first[t[i]] ; 
        for(int j = 0 ;j <51 ; j++) {
            if(first[j] == -1) continue ; 
            if(first[j] <= cur) first[j]++;
        }
        first[t[i]] = 1; 
    }
 
 
 
    for(int i = 0 ;i < q ; i++) {
        cout << ans[i] << " " ; 
    }
    cout << endl ; 
 
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    // int t;
    // cin >> t;
 
    // while (t--)
        solve();
 
    return 0;
}