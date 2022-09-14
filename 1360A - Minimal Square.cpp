#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

int func() {
    //..
    return 0;
}

main() {
    bool isValid = true, isBreak = false;
    int t, x, y, n, cnt = 0, sum = 0; 
    string s;
    cin >> t;

    for(int k = 0; k < t; k++) {
        cin >> x >> y;
        if(x >= y) {
            if(x <= 2*y)
                LOG(pow(2*y, 2));

            else
                LOG(x*x);
        }

        else {
            if(2*x >= y)
                LOG(pow(2*x, 2));

            else
                LOG(y*y);
        }
    }
}