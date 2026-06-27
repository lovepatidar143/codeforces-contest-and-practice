#include <iostream> 
using namespace std ; 
 
int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        string s ; 
        cin >> s ;
        int n = s.size();
        if(n <= 1 ){
            cout << "YES" ;
            break ;
        }
        char ch = s[0];
        int i = 1 ;
        int done = 0 ;
        while(i<n){
            if(ch == 'Y' && s[i] == 'Y'){
                cout << "NO" << endl;
                done = 1;
                break ;
            }
            else if(ch=='N' && s[i]=='N'){
                i++;
                ch = 'N';
            }
            else {
                i++;
                ch = 'Y';
            }
 
 
        }
        if(done) continue;
        else{
            cout << "YES" << endl;
        }
    }
 
    return 0 ; 
}