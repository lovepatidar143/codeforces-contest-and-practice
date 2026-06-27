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
#include <numeric>
using namespace std;
 
 
int main(){
    int t ; 
    cin >> t; 
    while(t--){
        //write your code here 
        
        long long  n ; 
        cin >> n ; 
        long long  m = n*(n-1)/2 ; 
        vector < long long > b(m , 0);
 
        for(long long i = 0LL ; i < m ; i++){
 
            cin >> b[i];
        }
         
        sort(b.begin() , b.end());
        long long i = 0LL , x = n-1 ;
        while(x>0){
            cout << b[i] << ' ' ;
            i += x ; 
            x--;
        }
        
        cout << 1000000000 << endl ; 
 
        
 
 
 
    }
    return 0;
}