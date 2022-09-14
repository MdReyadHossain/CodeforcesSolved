#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define LOG(x) cout << x << endl

bool isValid = false, flag = false;
long p, q, x, y, n, m, cnt = 0, sum = 0, sum1 = 0; 
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
    cin >> n >> m;
    LOG(((23-n)*60) + (60-m));
}

main() {
    int t;
    cin >> t;

    while(t--)
        solve();
        
    return 0;
}