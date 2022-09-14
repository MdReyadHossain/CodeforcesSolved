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
    int t, x, y, n, cntx = 0, cnty = 0, sum = 0; 
    string s;
    cin >> t;

    for(int k = 0; k < t; k++) {
        // cin >> n;
        // for(int i = 0; i < n; i++) {}
        cin >> x >> y;
        if(x > y)
            cntx++;

        else if(x < y)
            cnty++;
    }

    if(cntx > cnty)
            LOG("Mishka"); 
        
    else if(cntx < cnty)
        LOG("Chris"); 

    else
        LOG("Friendship is magic!^^"); 
}