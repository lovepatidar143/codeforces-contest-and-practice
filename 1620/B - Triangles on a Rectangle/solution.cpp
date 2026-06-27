#include <bits/stdc++.h>
using namespace std ; 
int main(){
    int t  ; 
    cin >> t ; 
    while(t--){
        int w , h ; 
        cin >> w >> h ;
        long long  ans = 0 ; 
        // vector <int> v ; 
        for(int i = 0 ; i < 4 ; i++){
            int n ; 
            cin >> n ; 
            vector<int> v(n)  ; 
            for(int j = 0 ; j< n ; j++) cin >> v[j] ; 
            if(i <2 ){
                ans = max(ans ,h*1LL* (v[n-1] - v[0])) ; 
            }
            else {
                ans = max(ans , w*1LL*(v[n-1] - v[0])) ; 
            }   
        }
 
        cout << ans << endl ; 
        
    
    }
    return 0 ; 
}