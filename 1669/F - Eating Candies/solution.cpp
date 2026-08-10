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
    for(int i = 0 ; i< n ; i++) cin >> a[i] ;
    vll pref(n , 0) ; 
    pref[0] = a[0] ; 
    for(int i = 1 ;i < n ; i ++){
        pref[i] = pref[i-1] + a[i] ; 
    }
    vll suff(n+1 , 0) ;
    for(int i = n-1 ; i>=0 ; i--) suff[i] = suff[i+1] + a[i] ; 
    int ans = 0 ; 
    int i = 0 , j = n-1 ; 
    while(i < j){
        if(pref[i] == suff[j]){
            ans = i + 1 +n - j ;
            i++;
            j--;
        }
        else if(pref[i] < suff[j]){
            i++;
        }
        else j--;
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