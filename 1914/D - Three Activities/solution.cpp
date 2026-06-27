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
        int n ; 
        cin >> n ; 
        vector < pair < int , int >> a ;
        vector < pair < int , int >> b ;
        vector < pair < int , int >> c ;
        for(int i = 0 ; i < n ; i++){
            int x ; 
            cin >> x ; 
            a.push_back({x,i});
        }
        for(int i = 0 ; i < n ; i++){
            int x ; 
            cin >> x ; 
            b.push_back({x,i});
        }
        for(int i = 0 ; i < n ; i++){
            int x ; 
            cin >> x ; 
            c.push_back({x,i});
        }
        
        sort(a.begin() , a.end());
        sort(b.begin() , b.end());
        sort(c.begin() , c.end());
        int ans = 0 ;
        for(int i = n-1 ;  i >= n-3 ; i--){
            int sum = 0;
            int ind = a[i].second;
            for(int j = n-1 ;j >=n-3 ; j-- ){
                if(b[j].second == ind) continue;
 
                int ind2 = b[j].second;
                for(int k = n-1 ; k >=n-3 ; k--){
                    if(c[k].second == ind || c[k].second == ind2) continue;
                    sum = a[i].first + c[k].first + b[j].first;
                    ans = max(ans, sum);
                } 
            }
        }
        cout << ans << endl;
 
 
    }
    return 0;
}