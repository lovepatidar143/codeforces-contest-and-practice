#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
using pll = pair<long long , long long > ;
 
#define all(x) (x).begin(), (x).end()
#define endl '
'
 
void solve() {
    long long  n , k , a , b ; 
    cin >>  n >> k >> a >> b ; 
    a-- , b-- ;
    vector <pll> arr ; 
    for(int i = 0 ;i < n ;i ++){
        long long  p ,q ; 
        cin >> p >> q ; 
        arr.push_back({p,q})  ; 
    }
    long long  way1 = 0 , way2 = 0 ;
 
    way1 = abs(
        arr[a].first - arr[b].first
    ) + abs(
        arr[a].second - arr[b].second 
    );
 
    long long mingo = LLONG_MAX , mincome = LLONG_MAX ; 
    for(int i = 0 ; i<k ; i++){
        long long dist = abs(
        arr[a].first - arr[i].first
    ) + abs(
        arr[a].second - arr[i].second 
    );
    long long dist2 =abs(
        arr[i].first - arr[b].first
    ) + abs(
        arr[i].second - arr[b].second 
    );
        mingo = min(mingo , dist) ;
        mincome = min(mincome , dist2) ; 
    }
 
 
 
 
    long long  way ;
    if(k == 0){
        way = way1 ; 
    }
    else {
        way2 = mingo + mincome ; 
        way = min(way1 , way2);
    }
    cout << way << endl ; 
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