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

int func() {
    //..
    return 0;
}

main() {
    bool isValid = true, isBreak = false;
    long t, x, y, n, cnt = 0, sum = 0; 
    string s;
    cin >> t;

    for(int k = 0; k < t; k++) {
        cin >> n;
        long a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];

        LOG(*max_element(a, a+n) - *min_element(a, a+n));
    }
}