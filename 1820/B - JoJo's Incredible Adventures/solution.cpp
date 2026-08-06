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
    string s;  
    cin >> s ; 
    int maxlen = 0 ; 
    int cnt = 0 ;
    for(auto ch : s){
        if(ch == '1') cnt++ ;
        else {
            cnt = 0 ;
        }
        maxlen = max(maxlen , cnt) ; 
    }
    cnt = 0 ; 
    for(auto ch : s){
        if(ch == '1') cnt++ ; 
        else break; 
    }
    for(int i = s.size()-1 ; i>= 0 ; i--){
        if(s[i] == '1') cnt ++ ; 
        else break;
    }
    
    int n = s.size() ; 
    cnt = min(cnt , n) ;
    maxlen = max(maxlen , cnt) ;
    long long ans ; 
    if(maxlen == 1)  ans = 1 ; 
    else if(maxlen == n) ans =1LL* maxlen * maxlen ; 
    else  ans = 1LL*((maxlen+1)/2) * ((maxlen +1) - (maxlen+1)/2);
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