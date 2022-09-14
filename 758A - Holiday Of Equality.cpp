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
    long t = 0, n, wf = 0, cnt = 0; 
    cin >> n;
    long a[n];

    for(long i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = *max_element(a, a+n);

    for(int i = 0; i < n; i++) {
        wf+= (max - a[i]);
    }

    LOG(wf);
}