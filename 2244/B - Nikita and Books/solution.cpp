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
    ll n ; 
    cin >> n ; 
    vector<int> a(n) ;
    for(int i = 0 ; i< n ; i++) cin >> a[i] ; 
    // int ans = 0 ; 
    // write code
    ll sum = 0 ;
    ll extra = 0 ; 
    string ans = "YES" ;
    for(int i = 0 ; i< n ; i++) {
        int book = a[i] ; 
        extra += book ; 
        int put = i +1 ; 
        if(put > extra){
            ans = "NO" ; 
            break ;
        }
        extra -= put ;
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