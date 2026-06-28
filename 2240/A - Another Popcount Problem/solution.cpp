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
    int n , k ; 
    cin >> n >> k ; 
 
    int setBit = log2(n) ; 
    int sum = n ; 
    int ans = 0 ; 
    for(int i = 0 ; i<=n ; i++){
        int boils = min(sum , k*(1<<i)) ; 
        ans += (boils /(1<<i)) ; 
        sum -= boils ;
        if(sum <=0) break ; 
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