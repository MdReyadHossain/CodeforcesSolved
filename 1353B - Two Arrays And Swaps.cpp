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
    long t, x, y, n, cnt = 0, sum = 0; 
    string s;
    cin >> t;

    for(int k = 0; k < t; k++) {
        cin >> n >> x;
        int a[n], b[n];
        for(int i = 0; i < n; i++) 
            cin >> a[i];
        for(int i = 0; i < n; i++) 
            cin >> b[i];

        sort(a, a+n);
        sort(b, b+n, greater<int>());

        for(int i = 0; i < x; i++) {
            if(b[i] > a[i]) {
                swap(b[i], a[i]);
            }
        }

        for(int i = 0; i < n; i++) 
            sum += a[i];
        
        LOG(sum);
        sum = 0;
    }
}