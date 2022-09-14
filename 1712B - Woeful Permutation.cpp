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
    long t, n, k, cnt = 0, team = 0; 
    cin >> t;

    for(long i = 0; i < t; i++) {
        cin >> n;
        long a[n];
        if(n%2 == 0) {
            for(long j = 1; j <= n; j+=2) {
                cout << j+1 << " " << j << " ";
            }
        }
        else {
            cout << 1 << " ";
            for(long j = 2; j <= n; j+=2) {
                cout << j+1 << " " << j << " ";
            }
        }
        LOG("");
    }
}