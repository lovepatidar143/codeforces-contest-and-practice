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
    string s ; 
    cin >> s ; 
    string ans = "" ; 
    bool a = true , b = true ; 
    for(auto ch : s){
        if(ch =='1' && a){
            a = false ;
        }
        else if(ch == '0' && b){
            b= false ;
        }
        else {
            ans += ch ; 
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