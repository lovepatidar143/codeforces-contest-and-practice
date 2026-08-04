#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
 
#define all(x) (x).begin(), (x).end()
#define endl '
'
static bool comp(int a ,int b){
    return a > b ;
}
void solve() {
    int n ; 
    cin >> n ; 
    vll a(n) , b(n) ; 
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    for(int i = 0 ; i< n ;i++){
        cin >> b[i] ; 
    }
 
    sort(all(a)) ; 
    sort(all(b) , comp) ; 
    long long ans = 1LL ; 
    long long MOD = 1e9 + 7 ; 
    for(int i = 0 ; i< n ; i++){
        int take = upper_bound(a.begin() , a.end() , b[i]) - a.begin(); 
        take = n-take ; 
        ans = (ans*(take-i))%MOD ; 
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