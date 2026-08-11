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
    ll n;
    cin >> n;
 
    vector<ll> a(n);
 
    for(ll i = 0; i < n; i++)
        cin >> a[i];
 
    ll num1 = -1LL;
    ll num2 = -1LL; 
    ll i = 0, j = n - 1;
    while(i < j ){
        if(a[i] == a[j]) {
            i++;
            j--;
            continue ; 
        }
        num1 = a[i] ; 
        num2 = a[j] ; 
        break;
    }
    if(num1 == -1) {
        cout << "YES" << endl ; 
        return ;
    }
    i = 0 , j = n -1 ; 
    while(i < j){
        while(a[i] == num1){
            i ++ ;
        }
        while(a[j] == num1) j--;
        if(a[i] == a[j]) {
            i++;
            j--;
        }
        else break ;
        
    }
    if(i >=j){
        cout << "YES" << endl ; 
        return ;
    }
    i = 0 , j = n -1 ; 
    while(i < j){
        while(a[i] == num2) i++ ; 
        while(a[j] == num2) j--;
        if(a[i] == a[j]) {
            i++;
            j--; 
 
 
        }
        else break ; 
    }
    if(i >= j) {
        cout << "YES" << endl ; 
        return ;
    }
    cout << "NO" << endl ; 
 
 
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--)
        solve();
 
    return 0;
}