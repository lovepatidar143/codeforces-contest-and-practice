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
    stack <int> st ; 
    vector<int> hash(n +1 , 0) ; 
    int cnt =0; 
    int i = 1 ; 
    for(auto ch :s ){
        if(ch == '1'){
            st.push(i);
 
        }
        else if(ch == '2'){
            if(st.empty()){
                hash[i] = 1 ; 
                cnt++;
            }
            else {
                hash[st.top()] = 1; 
                cnt++;
                st.pop();
            }
            
        }
        else {
            hash[i] = 1; 
            cnt++;
        }
        i++;
    }
    cout << n - cnt << endl ; 
    for(i = 1 ; i< n+1 ; i++){
        if(!hash[i]) cout << i << " " ; 
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