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
      
        int n , k ; 
        cin >> n >> k ; 
        vector <pair <int , int >>  hash(n);
        for(int i = 0 ; i<n ; i++){
            int x ; 
            cin >> x ; 
            x = x%k ;
            if(x == 0) x = k;
            hash[i] = {x , i+1};
 
        } 
        sort(hash.begin(), hash.end(), [](const pair<int,int> &a, const pair<int,int> &b){
    if (a.first != b.first)
        return a.first > b.first;   // first ↓
    return a.second < b.second;     // second ↑
});
        for(int i = 0 ; i< n ; i++){
            cout << hash[i].second << " ";
        }
        cout << endl ;
        
        
 
    }
    return 0;
}