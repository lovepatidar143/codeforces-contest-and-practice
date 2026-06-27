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
        //write your code here 
        int n; 
        cin >> n;
        vector < long long > arr(n,0);
 
        for(int i=0; i <n ; i++){
           cin >> arr[i]; 
        }
        long long ans = 0 ; 
        
        for(int i = 1 ; i <= 60 ; i++){
            long long k = 1LL << i;
            set < long long > hash ; 
            for(int j = 0 ; j< n ; j++){
                hash.insert(arr[j]%k);
            }
            if(hash.size() == 2) {
                ans = k ;
                break;
            }
        }
        cout << ans << endl; 
        
          
     
    }
    return 0;
}