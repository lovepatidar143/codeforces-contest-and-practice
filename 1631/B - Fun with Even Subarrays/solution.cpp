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
    reverse(all(a)) ;
    int ans = 0 ; 
    int have = 0 ;
    int num = a[0] ; 
    int i = 0 ; 
    while(i < n ){
        if(a[i] == num) i++ ; 
        else {
            ans++;
            // have = have *2 ; 
            i = i + i; 
        }
        // i++;
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