#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

void show_arr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    LOG("");
}

int digit(int n) {
    return (log10(n)+1);
}

int func() {
    //..
    return 0;
}

main() {
    bool isValid = true, flag = false;
    double t, x, y, n, cnt = 0, sum = 0; 
    string s;
    // cin >> t;

    // for(int k = 0; k < t; k++) {
    //     cin >> n;
    // }

    cin >> n;
    x = floor(n/2);
    LOG(x);
    if((int)n%2 == 0) {
        for(int i = 0; i < x; i++) {
            cout << 2 << " ";
        }
    }
    else {
        cout << 3 << " ";
        for(int i = 1; i < x; i++) {
            cout << 2 << " ";
        }
    }
}