#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
 
int main(){
    int T; 
    cin >> T;
    while (T--){
        map<char, int> hashmap;
        string s, t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();
 
        for(int i = 0; i < m; i++) hashmap[t[i]]++;
        for(int j = 0; j < n; j++) hashmap[s[j]]--;
 
        string ans = "";
        int i = 0;
        bool ok = true;
 
        for (auto it : hashmap) {
            if(it.second == 0) continue;
            if(it.second < 0) {
                ok = false;
                break;
            }
            // if(put && it.first >= s[0]) {
            //     ans = ans + s ;
            //     put = 0;
            // }
            while (i < n && it.first >= s[i]) {
                ans += s[i];
                i++;
            }
            while (it.second--) {
                ans += it.first;
            }
        }
 
        if(!ok) {
            cout << "Impossible" << endl;
            continue;
        }
 
        while(i < n) ans += s[i++];
 
        cout << ans << endl;
    }
    return 0;
}