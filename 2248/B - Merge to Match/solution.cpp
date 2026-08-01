#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
 
    if (n < 2 * m) {
        cout << "NO
";
        return;
    }
    
 
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    bool possible = true;
    for (int i = 0; i < m; i++) {
 
        if (a[i] > b[i]) {
            possible = false;
            break;
        }
 
        if (a[n - m + i] < b[i]) {
            possible = false;
            break;
        }
    }
    
    if (possible) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}