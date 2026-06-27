#include <iostream>
#include <string>   
using namespace std;
 
int main() {
    int row; 
    cin >> row; 
    int x = 0;
 
    for (int i = 0; i < row; i++) {
        string s;
        cin >> s; 
        if (s[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
 
    cout << x;
    return 0;
}