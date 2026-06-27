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
      string s ;
      int n ; 
      cin >> n ; 
      cin >> s ;
      unordered_map <char , int > prefix ; 
      unordered_map <char , int > suffix ; 
      vector <int> pre(n , 0) ; 
      vector <int> suf(n , 0) ;
      int count = 0 ;
      for(int i = 0 ; i < n ; i ++){
        if(prefix.find(s[i]) == prefix.end())
            count ++ ;
            
        pre[i] = count ;
        prefix[s[i]] ++ ;
      }
      count = 0 ;
      for(int i = n-1 ; i >=0; i --){
        if(suffix.find(s[i]) == suffix.end()){
            count ++ ;
            
        }
        suf[i] = count ;
        suffix[s[i]] ++ ;
      }
      int ans = 0 ; 
      for(int i = 0 ; i< n-1 ; i++){
        ans = max(pre[i] + suf[i+1] , ans );
      }
      cout << ans << endl; 
 
        
 
    }
    return 0;
}