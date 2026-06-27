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
      
        int n , x ; 
        
        cin >> n >> x ; 
        vector <int> arr(n);
        for(int i = 0 ; i < n ; i++) {
            cin >> arr[i];
        }
 
        int m = arr[0] ; 
        for(int i = 0 ; i < n-1 ; i++){
            m = max(m , arr[i+1] - arr[i]);
        }
        m = max(m , 2*(x-arr[n-1]));
        cout << m << endl;
        
 
    }
    return 0;
}