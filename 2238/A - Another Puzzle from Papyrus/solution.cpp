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
    int n , c ; 
    cin >> n >> c ; 
    vector <long long > a(n) ; 
    vll b(n) ; 
    for(int i = 0 ; i< n ; i++) cin >> a[i] ; 
    for(int i = 0 ; i< n ; i++) cin >> b[i] ; 
 
    bool asort = true  , bsort = true; 
    // for(int i =1 ; i< n ; i++){
    //     if(a[i] < a[i-1]) asort =false ;
    //     if(b[i] < b[i-1]) bsort = false ; 
 
    // }
    int ans = INT_MAX ; 
    int cnt = 0 ; 
    for(int i = 0 ; i< n ; i++){
        if(a[i] < b[i]) {
            cnt = -1 ; 
            break ; 
        }
        cnt += a[i] - b[i] ; 
    }
    ans = min(ans , cnt) ;
    if(ans == -1)  ans = INT_MAX ; 
    cnt = c ; 
    sort(a.begin() , a.end()) ; 
    sort(b.begin() , b.end()) ; 
    for(int i = 0 ; i< n ; i++){
        if(a[i] < b[i]){
            ans = -1 ; 
            cnt = -1 ; 
            break ; 
        }
        cnt += a[i] - b[i] ; 
    }
    ans = min(ans , cnt) ; 
    // if(ans == -1 && cnt == -1){
    //     cout <<
    // }
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