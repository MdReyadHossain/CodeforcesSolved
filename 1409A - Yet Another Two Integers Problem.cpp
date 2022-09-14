#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

main() {
    bool isValid = false, isBreak = false;
    long t, n, cnt = 0, a, b, x; 
    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> a >> b;
        if(abs(a-b)%10 == 0) 
            LOG(abs(a-b)/10);

        else 
            LOG(abs(a-b)/10 + 1);
    }
}