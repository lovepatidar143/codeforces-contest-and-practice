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
    ll n ; 
    cin >> n ; 
    ll c ; 
    cin >> c ; 
    vll arr(n) ; 
    for(int i = 0 ; i< n ; i++) cin >> arr[i] ;
    long long sum = 0 ; 
    long long sqrsum = 0 ;
    for(int i = 0 ; i<n ; i++) {
        sum += arr[i] ;
        sqrsum += (arr[i]*arr[i]) ;
    } 
     long double b = 4.0L*sum ; 
     long double a = 4.0L*n ;   
     long double c1 = sqrsum-1.0L*c;
    long double r1 = -b + sqrt(b*b  - 4*a*c1) ; 
 
    long double ans = r1/(2.0L*a) ;
    long long final = llround(ans); 
    cout << (long long )(ans) << endl ; 
 
 
    
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