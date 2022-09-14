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
    long t, x = 0, y, n, cnt = 0; 
    string s;
    cin >> t;

    for(int k = 0; k < t; k++) {
        cin >> n;
        for(int i = 0; i < n; i++) {
            x += 1;
            s = to_string(x);
            while(x%3 == 0 || s[s.length()-1] == '3') {
                x += 1;
                s = to_string(x);
            }
        }
        LOG(x);
        x = 0;
    }
}