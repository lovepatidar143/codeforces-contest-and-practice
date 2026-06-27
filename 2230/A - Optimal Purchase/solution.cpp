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
      long long n  ,a , b; 
      cin >> n >> a >> b ; 
 
      long long cost  = 0LL;
      
      long long group = 1LL*n/3LL ; 
      long long remain = 1LL*n%3LL ; 
      cost = min(cost + group*b , cost + 3LL*group*a);
      cost = min(cost + remain*a , cost + b);
      cout << cost << endl ; 
      
      
        
        
    }
    return 0;
}