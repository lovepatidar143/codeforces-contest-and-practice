#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
 
    vector<int> a(2 * n + 1);
    vector<int> left_pos(n + 1, 0);
    vector<int> right_pos(n + 1, 0);
    
    for (int i = 1; i <= 2 * n; i++) {
        cin >> a[i];
        if (left_pos[a[i]] == 0) {
            left_pos[a[i]] = i;
        } else {
            right_pos[a[i]] = i;
        }
    }
    
 
    vector<int> interval_at(2 * n + 1, 0);
    for (int i = 1; i <= n; i++) {
        interval_at[right_pos[i]] = left_pos[i];
    }
    
 
 
    vector<long long> dp(2 * n + 1, 0);
    
    for (int i = 1; i <= 2 * n; i++) {
 
        dp[i] = dp[i - 1];
        
 
        if (interval_at[i] != 0) {
            int l = interval_at[i];
            int r = i;
            long long len = r - l + 1;
            long long w = len * len - len;  
            dp[i] = max(dp[i], dp[l - 1] + w);
        }
    }
    
 
    cout << 2LL * n + dp[2 * n] << "
";
}
 
int main() {
 
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