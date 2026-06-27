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
using namespace std ; 
 
int main(){
    int t ; 
    cin >> t; 
    while(t--){
      
        int n , k , q ; 
        cin >> n >> k >> q ; 
 
 
        long long  count = 0 ; 
        long long  day = 0 ; 
        for(int i = 0 ; i< n ;i++) {
            int x ;
            cin >> x ; 
            if(x <= q){
                day ++ ;
 
            }
            else {
                long long  c = day - k +1 ;
                if(c >0){
                    count += (c*(c+1))/2;
                } 
                day = 0; 
            }
        }
        if(day >= k){
            long long c = day - k + 1;
            count += c * (c + 1) / 2;
        }
      //love patidar 
 
        cout << count << endl;
 
 
 
        
 
        
 
        
 
    }
    return 0;
}