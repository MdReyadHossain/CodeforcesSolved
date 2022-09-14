#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define LOG(x) cout << x << endl

bool isValid = false, flag = false;
int x, y, n, m, cnt = 0, sum = 0; 
string s;

void show_arr(int arr[]) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    LOG("");
}

int digit(int n) {
    return (log10(n)+1);
}

void solve() {
    // cin n;
    long a[4];
    cin >> a[0];
    for(int i = 1; i < 4; i++) {
        cin >> a[i];
        if(a[0] < a[i])
            cnt++; 
    }
    LOG(cnt);
    cnt = 0;
}

main() {
    int t;
    cin >> t;

    while(t--) 
        solve();
        
    return 0;
}