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
    vll a(n) ;
    for(int i = 0 ; i < n ; i++) cin >> a[i] ; 
    sort(all(a)) ; 
    long long  cnt = 0 ; 
    int first  = -1; 
    for(int i = 0 ; i< n ;i ++){
        if(a[i] < 0) cnt ++ ; 
        else {
            first = i ; 
            break ; 
        }
    }
    long long  ans = 0 ; 
    if(cnt %2 == 0){
        for(int i = 0 ; i< n ; i++){
            ans += abs(a[i]) ; 
        }
    }
    else {
        if(first == -1){
            for(int i = 0 ; i< n-1 ; i++){
                ans += abs(a[i]) ; 
            }
            ans += a[n-1] ; 
        }
        else {
            int notTake = min(abs(a[first-1]) , a[first]) ; 
            for(int i = 0 ; i< n ; i++){
                ans += abs(a[i]) ;
            }
            ans -= (2*(notTake)) ; 
        }
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