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
    long long ans = 0LL; 
 
    vector <long long > pref(n) ; 
    pref[0] = 1LL* a[0] ; 
    for(int i = 1 ; i< n ;i++){
        pref[i] = pref[i-1] + a[i] ; 
    }
 
    vector<int> divisor ; 
    for(int i = 1 ; i< n ; i++){
        if(n %i == 0) divisor.push_back(i) ;
    }
    
    for( auto div : divisor){
        long long  high = LLONG_MIN , low = LLONG_MAX ;  
        for(int i = div-1 ; i < n ; i+= div){
            if(i == div-1) {
                high = max(1LL*high , pref[i]) ; 
                low = min(1LL*low , pref[i]) ;
            }
            else {
                high = max(1LL*high , pref[i] - pref[i-div ]) ;
                low = min(1LL*low , pref[i]- pref[i-div ] ) ;
 
            }
        }
        ans = max(1LL*(1LL*high - 1LL*low) , ans); 
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