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
    vector <int> a(n) ; 
    for(int i = 0 ; i< n ; i++) cin >> a[i] ; 
 
    // int ans = a[0] ; 
    // int sum =a[0];
    // bool even =!(a[0] %2 == 0)  , odd = !(a[0] %2 ==1); 
    int ans = INT_MIN ; 
    int sum = 0 ; 
    bool even = true , odd = true ; 
 
    for(int i =0 ; i< n ;i++){
        
        if(sum < 0){
            sum = 0 ; 
            odd = true; 
            even = true ; 
        } 
        if(odd == true && even == true ){
            sum += a[i] ; 
            ans =max(sum , ans) ; 
            even =!(abs(a[i]) %2 == 0)  , odd = !(abs(a[i]) %2 ==1); 
            continue ; 
        }
        if(even){
            if(abs(a[i]) %2 == 0) {
                // lele evne
                sum += a[i] ; 
                ans = max(sum , ans) ; 
                even =false ; 
                odd = true ; 
            }
            else {
                sum = 0 ; 
                sum += a[i] ; 
                ans = max(ans , sum) ; 
                even = true ; 
                odd = false ; 
            }
        }
        else {
            if(abs(a[i]) %2 ==1 ){
                sum += a[i];
                ans = max(sum , ans) ; 
                even = true ; 
                odd = false ; 
            }
            else {
                sum = 0; 
                sum += a[i] ; 
                ans = max(ans , sum) ; 
                even =false ; 
                odd = true ; 
            }
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