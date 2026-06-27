#include <iostream>
using namespace std ; 
int main(){
    int t ; 
    cin >> t ; 
    while (t--){
        string s ; 
        cin >> s; 
        int count = 0 ; 
        int n = s.size();
        int scount = 0 ; 
        for(int i = 0 ; i< n ;i++){
            if(s[i] == 's') scount ++ ;
        }
        for(int i = 0 ; i< n ; i++){
            if(i==0 && s[i] == 'u') {
                count ++ ; 
 
                s[i] = 's' ; 
                if(scount < 2 ) scount ++ ;
                continue;
            }
            // if(scount <2 && s[i]=='u'){
            //     s[i] = 's';
            //     count ++ ;
            //     scount ++ ;
            //     continue;
            // } 
 
            if(s[i] == 'u'){
                int fpos = 0 ;
                int bpos = 0 ;
                for(int j = i+1 ; j< n ; j++){
                    if(s[j] == 's') {
                        fpos = j-i;
                        break;
                    }
 
                }
                for(int j = i-1 ; j>=0 ; j--){
                    if(s[j] == 's'){
                        bpos = i - j; 
                        break; 
 
                    }
                }
                if(bpos == fpos){
 
                }
                else if(bpos < fpos || fpos == 0){
                    s[i+bpos] = 's';
                    count ++ ;
                }
                else  {
                    s[i-fpos] = 's';
                    count ++;
                }
 
 
            }
 
        }
        cout << count << endl ;
    }
    return 0 ; 
}
 
 
 
 