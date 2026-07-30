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
    int n , x ; 
    cin >> n >> x; 
    queue<int> st , pt , qt ; 
    for(int i = 0 ; i< n ; i++){
        int a ; 
        cin >> a ; 
        st.push(a) ; 
    }
    for(int i = 0 ; i< n ; i++){
        int a ; 
        cin >> a ; 
        pt.push(a) ; 
    }
    for(int i = 0 ; i< n ; i++){
        int a ; 
        cin >> a ; 
        qt.push(a) ; 
    }
 
    string ans ; 
 
    int cnt  = 0 ; 
    while(cnt != x && !st.empty() && (st.front() | x) == x){
        cnt = cnt | st.front() ; 
        st.pop() ; 
    }
    while(cnt != x &&!qt.empty() && (qt.front() | x) == x){
        cnt = cnt | qt.front() ; 
        qt.pop() ; 
    }
    while(cnt != x && !pt.empty() && (pt.front() | x) == x){
        cnt = cnt | pt.front() ; 
        pt.pop() ; 
    }
 
    if(cnt == x){
        ans = "Yes" ; 
    }
    else {
        ans = "No" ; 
    }
 
    cout << ans  << endl; 
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