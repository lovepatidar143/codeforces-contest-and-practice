#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
 
#define all(x) (x).begin(), (x).end()
#define endl '
'
bool go(vi &a , ll mid , int x){
    long long total  = 0; 
    int n = a.size() ; 
    for(int i = 0 ; i< n ; i++){
        if(a[i] >= mid) continue ; 
        else {
            long long togo = mid - a[i] ;
            if(togo > x) return false ;
            x -= togo  ; 
        }
    }
 
    // if(total > x) return false ; 
    return true; 
}
void solve() {
    int n , x ;
    cin >> n >> x ; 
    vector<int> a(n) ; 
    for(int i = 0 ; i< n ; i++) cin >> a[i] ; 
 
    long long low = 1 , high = LLONG_MAX ; 
 
    long long ans =1 ; 
 
    while(low <= high){
        long long mid = low + (high -low)/2 ; 
 
        if(go(a, mid ,x )){
            ans = mid ; 
            low = mid+ 1 ; 
        }else {
            high = mid-1 ; 
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