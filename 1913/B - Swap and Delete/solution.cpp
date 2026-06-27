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
        string s ; 
        cin >> s ; 
        int c0 = 0 , c1 = 0  ;
        for(int i = 0 ; i< s.size() ; i++){
            if(s[i] == '0') c0++;
            else c1++;
        }
        if(c0 == 0 || c1 == 0) cout << s.size() << endl;
        else if(c0 == c1) cout << 0 << endl ;
 
        else{
            int count =0 ;
            if(c0>c1){
                count = c0-c1 ;
                c0 = c1 ;
            }else{
                count = c1 -c0 ;
                c1 = c0 ;
            }
            for(int i = 0 ; i< s.size() ; i++){
                if(s[i] == '0') c1--;
                else c0--;
                if(s[i+1] == '0' && c1 == 0 && i < s.size()-1){
                    count += c0;
                    break;
                }
                if(s[i+1] == '1' && c0 == 0 && i < s.size() -1){
                    count += c1 ; 
                    break; 
                }
              
               
            }
            
            cout << count << endl ; 
        }
 
 
    }
    return 0;
}