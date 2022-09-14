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
    bool isValid = false, flag = false;
    int x, y, n, m, cnt = 0, sum = 0; 
    string s;

    cin >> n >> m;
    char a[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
            if(a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y')
                isValid = true;
        }
    }
    
    if(isValid)
        LOG("#Color");

    else
        LOG("#Black&White");
}

main() {
    int t;
    // cin >> t;

    // while(t--) 
        solve();
        
    return 0;
}