#include <iostream>
using namespace std;
 
int main() {
    long long x;
    cin >> x;
 
    string s = to_string(x);
    for(int i = 0; i < s.size(); i++){
        int d = s[i] - '0';
        if(i == 0 && d == 9) continue;
        if(d > 4) s[i] = char('0' + (9 - d));
    }
    cout << s;
}