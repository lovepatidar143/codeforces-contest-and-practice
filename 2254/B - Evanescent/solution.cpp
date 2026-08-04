#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
 
    int groups = 1;
    for (int i = 1; i < n; i++)
        if (s[i] != s[i - 1])
            groups++;
 
    int ans = groups;
 
    for (int i = 1; i <= n - 2; i++) {
        int cur = groups;
 
 
        if (s[i - 1] != s[i])
            cur--;
 
 
        if (s[i] != s[i + 1])
            cur--;
 
 
        if (s[i - 1] != s[i + 1])
            cur++;
 
        ans = min(ans, cur);
    }
 
    cout << ans << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--)
        solve();
}