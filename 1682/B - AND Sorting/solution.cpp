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
    for(int i = 0 ; i< n ; i++) {
        cin >> a[i] ; 
    }
 
    int bit = ((1<<32 )-1) ; 
    for(int i = 0  ; i< n ; i++){
        if(a[i] != i){
            bit = bit & a[i] ;
        }
    }
    cout << bit << endl ; 
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