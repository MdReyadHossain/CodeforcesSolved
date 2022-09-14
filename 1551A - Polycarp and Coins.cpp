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
    ll t, x, y, n, cnt = 0, sum = 0; 
    string s;

    cin >> n;
    if(n%3 == 0) 
        cout << n/3 << " " << n/3 << endl;
    
    else {
        if(((n/3) + 1) + ((n/3) *2) == n)
            cout << (n/3) + 1 << " " << n/3 << endl;

        else
            cout << n/3 << " " << (n/3) + 1 << endl;
    }
}

main() {
    int t;
    cin >> t;

    while(t--) 
        solve();
        
    return 0;
}