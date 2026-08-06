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
    for(int i  = 0 ; i< n ; i++) cin >> a[i] ; 
    string ans = "YES" ; 
    sort(all(a)) ; 
    vector<long long > pref(n) ; 
    pref[0] = a[0] ; 
    for(int i =1 ; i< n ; i++){
        pref[i] = pref[i-1] + 1LL*a[i] ; 
 
    }
    if(a[0] != 1){
        cout << "NO" << endl ; 
        return ;  
    }
    for(int i = 1 ; i< n ; i++){
        if(a[i] > pref[i-1]) {
            cout << "NO" << endl ; 
            return ; 
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