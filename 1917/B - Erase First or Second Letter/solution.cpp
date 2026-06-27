#include <bits/stdc++.h>
using namespace std ; 
 
 
int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        int n ; 
        cin >> n ; 
        string s ; 
        cin >> s ; 
        vector<int> hash(26 , 0) ;
 
 
        // vector <int> 
        int ans = 0 ; 
        int prev = 0 ; 
        for(char ch : s){
            int ind = ch - 'a' ; 
            ans += prev ; 
            if(hash[ind] == 0){
                prev++ ;
 
            }
            else {
 
            }
            hash[ind]++; 
        }
        ans += prev  ; 
        cout << ans << endl ; 
    }
    return 0 ; 
}