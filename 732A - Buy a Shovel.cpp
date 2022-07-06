#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define LOG(x) cout << x << endl
 
main() {
    bool isValid = false;
    int price, k, r, cnt= 0, shovel, i = 1; 
    cin >> k >> r;
    
    while(!isValid) {  
        price = k * i;
        shovel = price % 10;
        if(shovel == 0 || shovel == r){
            isValid = true;
            break;
        } 
        i++;
    }
 
    LOG(i);    
}