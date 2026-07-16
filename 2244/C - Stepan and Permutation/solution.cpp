#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
 
#define all(x) (x).begin(), (x).end()
#define endl '
'
class DSU{
    vector<int> parent , rank ; 
    public : 
    DSU(int n ){
        parent.resize(n) ; 
        rank.resize(n , 0) ; 
        for(int i = 0 ; i < n ; i++){
            parent[i] = i ; 
        }
    }
 
    int find(int i ){
        if(parent[i] == i) return i ; 
        return parent[i] = find(parent[i]) ; 
    }
 
    void findunion(int x , int y){
        int xroot = find(x) ; 
        int yroot = find(y) ; 
        if(xroot == yroot) return ; 
        if(rank[xroot] < rank[yroot]){
            parent[yroot] = xroot ;
        }
        else if(rank[xroot] > rank[yroot]){
            parent[xroot] = yroot ; 
        }
        else {
            parent[xroot] = yroot ; 
            rank[xroot]++;
        }
    }
};
void solve() {
    int n , x , y ; 
    cin >> n >> x >> y ; 
    DSU d(n) ; 
    vector<int> a(n) ; 
    for(int i = 0 ; i< n ; i++) cin >> a[i]; 
    // vector<vector<int>> adj(n) ; 
    for(int i = 0 ; i< n ; i++){
        if(i+x < n) d.findunion(i , i+x) ; 
        if(i+y < n ) d.findunion(i , i+y) ;
        if(i-x >=0) d.findunion(i -x , i) ; 
        if(i-y >= 0) d.findunion(i- y , i) ;
 
    }
    string ans = "YES" ;
    // queue <int> qu ; 
    for(int i = 0 ; i< n ; i++){
        int p1 = d.find(i) ; 
        int p2 = d.find(a[i] -1) ; 
        if(p1 != p2){
            ans = "NO" ; 
            break ; 
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