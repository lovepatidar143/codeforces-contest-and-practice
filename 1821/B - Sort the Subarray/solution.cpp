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
    vi a(n) , b(n) ; 
    for(int i = 0 ; i< n ; i++ ) cin >> a[i] ; 
    for(int i = 0 ; i< n ; i++ ) cin >> b[i] ; 
    int l = -1  , r = -1;  
    for(int i = 0 ; i< n ; i++) {
        if(a[i] != b[i]) {
            l = i+1 ; 
            break ; 
        }
    }
    for(int i = n-1 ; i>= 0 ; i--){
        if(a[i] != b[i]) {
            r = i+1 ; 
            break ; 
        }
    }
    while(l >=2 && a[l-2] <=b[l-1]) l--;
    while(r <n && a[r] >= b[r-1]) r++ ; 
    cout << l << " " << r << endl ; 
 
 
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