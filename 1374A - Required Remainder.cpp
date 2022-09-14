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
    long t, x, y, n, cnt = 0; 
    cin >> t;

    for(int k = 0; k < t; k++) {
        cin >> x >> y >> n;
        long div = n / x;
        long rem = (div*x) + y;
        if (rem > n) {
            div -= 1;
            rem = (div*x) + y;
        }
        LOG(rem);
    }
}