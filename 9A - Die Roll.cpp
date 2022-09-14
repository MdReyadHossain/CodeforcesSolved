#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
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

void solve() {
    bool isValid = true, flag = false;
    int x, y, n, cnt = 0, sum = 0; 
    string s;

    cin >> x >> y;
    n = 7 - max(x, y);
    for(int i = 1; i <= 6; i++) {
        if((n%i) == 0 && (6%i) == 0) {
            x = n/i;
            y = 6/i;
        }
    }
    cout << x << "/" << y << endl;
}

main() {
    int t;
    // cin >> t;

    // while(t--) 
        solve();
        
    return 0;
}