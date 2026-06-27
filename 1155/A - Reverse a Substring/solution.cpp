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
    int n ; 
    cin >> n ; 
    string s ; 
    cin >> s ; 
    int j = 0; 
    for(int i = 1 ;  i < n ; i++){
        if(s[i]<s[i-1]){
            j = i;
            break ; 
        }   
    }
    if(j == 0) cout << "NO" << endl ;
    else {
        cout << "YES" << endl;
        cout << j << " " <<  j+1 << endl ;
        
    }
    return 0; 
}