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
    int k ; 
    cin >> n >> k ; 
    vector<vector<int>> a(n , vector<int> (n)) ;
    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j< n ; j++){
            cin >> a[i][j] ; 
        }
    }
 
    int cnt = 0 ; 
 
    for(int i = 0 ; i < n ; i++){
        for(int j= 0 ; j < n ; j++){
            if(a[i][j] != a[n-i-1][n-j-1]) cnt++ ; 
        }
    }
    cnt = cnt/2 ; 
    if(cnt >k){
        cout << "NO" << endl; 
        return ; 
    }
    int remain = k - cnt ; 
    if(remain %2 ==1 && n%2==0) cout << "NO" << endl ; 
    else cout << "YES" << endl ; 
    
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