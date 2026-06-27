#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
 
#define all(x) (x).begin(), (x).end()
#define endl '
'
bool comp(pair <int, int> a , pair <int , int> b){
    return a.first < b.first ; 
}
void solve() {
    ll n ; 
    cin >> n ; 
    vector <pair <ll , ll >>  a(n) ; 
    for(ll i = 0 ; i< n ;i++) {
        cin >> a[i].first ; 
        a[i].second = i ; 
    }
 
    vector <ll> ans(n) ; 
 
    //solution here 
 
    sort(a.begin() , a.end() , comp) ; 
    vector <ll> pre(n) ; 
    ll sum = 0 ; 
    for(ll i = 0 ; i< n ;i++){
        sum += a[i].first ; 
        pre[i] = sum ; 
    }
 
    for(ll i = 0 ; i< n ; i++){
        ll cnt = i ; 
        ll score = pre[i];
        ll j = i ; 
        while( j < n ){
            // int ind = a.lower_bound({pre[j] +1 , INT_MIN}) - a.begin() -1 ;
            pair <ll ,ll > temp = {pre[j]+1 , INT_MIN } ; 
            int ind = lower_bound(a.begin() , a.end() , temp)  - a.begin() ; 
            ind -- ; 
            if(ind == j) break ; 
            cnt = ind ; 
            j = ind ; 
 
        }
        ans[a[i].second] = cnt ; 
    }
 
    // solution complete
 
    for(int i = 0 ; i< n ;i++){
        cout << ans[i] << " " ; 
    }
    cout << endl ; 
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