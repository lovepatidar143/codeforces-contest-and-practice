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
    int a, b , c ; 
    cin >> a >> b >> c ; 
    priority_queue <int , vector<int> > maxh ; 
    priority_queue<int , vector<int> , greater<>> minh ; 
    maxh.push(a);
    maxh.push(b);
    maxh.push(c);
    minh.push(a);
    minh.push(b);
    minh.push(c);
    int cnt = 0 ; 
    while(true){
        int x = minh.top() ; 
        minh.pop() ; 
        int y = maxh.top() ; 
        maxh.pop() ; 
        if(x == minh.top()) break ;
        if(y == maxh.top()) break ;
        cnt ++ ; 
        x++ ;
        y--;
        minh.push(x) ; 
        maxh.push(y) ; 
 
    }
    cout << cnt << endl ;
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