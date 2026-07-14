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
    string s ; 
    cin >> s ; 
    int cnt = 0 ; 
    int ans = 0 ; 
    for(int i = 0 ; i< n ; i++) {
        char ch = s[i] ; 
        if(ch == '*'){
            int time ; 
            if(cnt %2 == 0) time = cnt/2 ;
            else time = cnt/2 + 1 ; 
 
            ans = max(time , ans) ; 
            cnt = 0 ; 
        }
        else cnt ++ ;
    }
    int time ; 
    if(cnt %2 == 0) time = cnt/2 ;
    else time = cnt/2 + 1 ;
    ans = max(ans , time) ; 
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