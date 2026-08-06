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
    vi a(n) ;
    for(int i = 0 ; i< n ; i++) cin >> a[i] ; 
    for(int i = 0 ; i< n ; i++) a[i] = a[i] + i+1; 
    sort(a.begin() , a.end()) ; 
    int cnt = 0 ; 
    for(int i = 0 ; i< n ; i++) {
        if(a[i] <= c){
            c -= a[i] ; 
            cnt ++ ; 
        }
        else break ; 
    }
    cout << cnt << endl ; 
 
 
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