#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define LOG(x) cout << x << endl

bool isValid = false, flag = false;
ll p, q, x, y, n, m, cnt = 0, sum = 0, sum1 = 0; 
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
    sum = sum1 = 0;
    cin >> n;
    sum += pow(2, n);
    for(int i = 1; i < n/2; i++) 
        sum += pow(2, i);
    
    for(int i = n/2; i < n; i++) 
        sum1 += pow(2, i);

    x = sum - sum1;
    LOG(x);
}

main() {
    int t;
    cin >> t;

    while(t--) 
        solve();
        
    return 0;
}