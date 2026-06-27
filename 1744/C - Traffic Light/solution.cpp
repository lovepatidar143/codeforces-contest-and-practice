#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack> 
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <climits>
using namespace std;
 
 
int main(){
    int t ; 
    cin >> t; 
 
    while(t--){
      int n ; 
      cin >> n ; 
      char c ; 
      cin >> c ; 
      string s ; 
      cin >> s; 
        string light = s +s ;
    int cind = 0 ; 
    int gind = 0 ; 
    int count = 0 ;
    bool cut = false ;
    while (cind < 2*n)
    {
        /* code */
        if(light[cind] == c){
            int cur = 0 ; 
            for(int i = cind ; i < 2*n ; i++){
                if(light[i]=='g'){
                    count = max(count ,cur  );
                    cur = 0 ; 
                    if(i > n ) cut = true ;  
                    cind = i ;
                    break;  
                }
                cur ++ ; 
            }
        }
        cind ++ ;
        if(cut) break ;
        
    }
    cout << count << endl ; 
    
        
 
    }
    return 0;
}