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
    long t, n, cnt = 0; 
    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> n; 
        if(n == 1)
            LOG(2);

        else if(n == 2)
            LOG(1);

        else if(n%3 != 0) {
            LOG((n/3) + 1);
        }

        else
            LOG(n/3);
    }
}