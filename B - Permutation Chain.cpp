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
    long t, n, cnt = 0, k = 1; 
    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> n;
        int a[n];
        LOG(n);
        k = 1;
        for(int s = 0; s < n; s++) {
            a[s] = k++;
        }
        k = 0;
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                cout << a[k] << " ";
            }
            swap(a[n-1], a[j]);
            LOG("");
        }
    }
}