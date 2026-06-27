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
        //write your code here 
        int m = INT_MAX ;
 
        int n , k ; 
        cin >> n ;
        cin >> k ;
 
 
        int count = 0  , count4=0;
        for(int i = 0 ; i< n ; i++){
            int a ; 
            
            cin >> a ;
            if(a%2 == 0) count ++ ;
            if(a%4 == 0 ) count4 = 1 ;
            if(a%k ==0) m = 0;
            else m = min(m , k - a%k);
 
        }
        if( k== 4 && count4 == 1 ) cout << 0 << endl;
        else if(k == 4 && count < 2) cout << min(2 - count,m) << endl ;
        else if(k == 4) cout << 0 << endl ;
        else cout << m << endl ;
        
 
 
    }
    return 0;
}