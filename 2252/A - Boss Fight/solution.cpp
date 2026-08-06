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
    vector<int> a(n) ; 
    for(int i  = 0 ; i< n ; i++) cin >> a[i] ; 
    priority_queue <pii> pq ; 
    unordered_map <int , int > hash ; 
    for(auto it : a) hash[it]++ ; 
    for(auto it : hash) pq.push({it.second , it.first}) ; 
    int total = 0 ; 
    while(!pq.empty()){
        if(pq.size() == 1){
            auto it = pq.top() ;
            pq.pop() ; 
            if(it.first >=2) total += (2*it.second) ;
            else total += it.second; 
            break;
        }
        else {
            auto a = pq.top() ; 
            pq.pop() ; 
            auto b = pq.top() ; 
            pq.pop() ; 
            total += a.second ; 
            total += b.second ; 
            if(a.first > 1) pq.push({a.first -1 , a.second}) ; 
            if(b.first > 1) pq.push({b.first -1 , b.second}) ; 
 
        }
    }
 
    cout << total << endl ; 
 
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