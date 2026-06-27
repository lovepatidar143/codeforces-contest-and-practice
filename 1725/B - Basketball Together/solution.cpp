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
    int n , d ; 
    cin >> n >> d ; 
    vector <int> team(n);
    for(int i = 0 ; i< n ; i++) cin >> team[i];
    sort(team.begin() ,team.end());
    int remain = n ; 
    int player ; 
    int count = 0 ;
    for(int i = n-1 ; i>=0 ; i --){
        player = d/team[i] +1 ;
        remain -= player ; 
        if(remain >=0) count ++;
        else break ;
 
 
    }
    cout << count << endl ; 
    return 0 ;
}