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
    vector<int> a(n) ; 
    for(int i = 0 ; i< n ; i++) cin >> a[i] ; 
    string ans = "YES" ;
    
    int low = INT_MIN , high = INT_MAX ; 
    if(n%2==0){
        for(int i = 0 ; i< n ; i+=2){
            int x = a[i] -1 ; 
 
            int y = a[i+1] + 1 ; 
            int h= x , l = y ; 
            // if(l > low ){
            //     ans = "NO" ;
            //     break ;
            // }
            // if(h > high){
            //     ans = "NO";
            //     break ;
            // }
            low = max(l , low) ;
            high = min(h , high) ; 
            if(low > high){
                ans = "NO" ; 
                break ;
            }
        }
    }
 
 
 
    if(n%2 == 0) cout << ans << endl ; 
    else cout << "NO" <<endl ; 
    // cout << ans << endl ; 
 
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