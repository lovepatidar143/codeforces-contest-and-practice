#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
 
        int cooldown = 0;   
        int sleep = 0;      
 
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                cooldown = k;  
            } else { 
                if(cooldown == 0) {
                    sleep++;     
                } if(cooldown > 0 ) cooldown -- ;
 
 
            }
 
            
        }
 
        cout << sleep << endl;
    }
    return 0;
}