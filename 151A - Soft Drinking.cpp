#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define LOG(x) cout << x << endl
 
int func() {
    //..
    return 0;
}
 
main() {
    bool isValid = false, isBreak = false;
    int t, n, k, l, c, d, p, nl, np, cnt = 0; 
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // for(int i = 0; i < t; i++) {

    // }

    int drink = (k * l)/nl;
    int lime = c * d;
    int salt = p/np;
    
    LOG(min(min(drink, lime), salt)/n);
}