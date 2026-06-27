#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std ; 
 
int main(){
    int t ;
    cin >> t ; 
    while(t!=0){
        t--;
        int n , k ;
        cin >> n >> k ;
        vector <int> arr(n,0) ;
        for(int i = 0 ; i < n ; i++) {
            int c ;
            cin >> c ; 
            arr[i] = c ; 
        } 
        bool sor = is_sorted(arr.begin() , arr.end());
        if(sor) cout << "YES";
        else if(k <=1 && sor) cout << "YES" ;
        else if(k <= 1 && !sor  ) cout << "NO" ;
        else cout << "YES" ;
        cout << endl;
    }
    return 0 ; 
}