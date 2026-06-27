#include <iostream>
using namespace std ; 
 
int main (){
    int n , k , l , c , d , p , nl , np ;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np ;
    int drink = k * l / nl  ;
    int slice = c * d ; 
    int salt = p / np ;
 
    int count = 0 ;
    while(drink != 0 && slice != 0 && salt != 0){
        count ++ ; 
        drink -- ; 
        slice --; 
        salt--;
 
 
    }
    cout << count/n ; 
}