#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
 
        long long pos = 0, neg = 0;
 
        for (int i = 0; i < n; i++) {
            long long new_pos = max(pos - a[i], b[i] - neg);
            long long new_neg = min(neg - a[i], b[i] - pos);
 
            pos = new_pos;
            neg = new_neg;
        }
 
        cout << max(pos, neg) << "
";
    }
    return 0;
}