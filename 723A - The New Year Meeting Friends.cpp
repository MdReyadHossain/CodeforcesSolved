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
    int t, n, cnt = 0, a[3]; 
    // cin >> n;

    for(int i = 0; i < 3; i++) {
        cin >> a[i]; 
    }
    sort(a, a + 3);

    int min = (a[1]-a[0]) + (a[2]-a[1]);
    LOG(min);
}