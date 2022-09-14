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
    ll x, y, n, cnt = 0, sum = 0; 
    string s;

    cin >> n;
    if(n%2 == 0) 
        LOG(n/2);

    else 
        LOG(n/2 + 1);
}

main() {
    int t;
    cin >> t;

    while(t--) 
        solve();
        
    return 0;
}