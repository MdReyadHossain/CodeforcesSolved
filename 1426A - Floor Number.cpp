#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define dl double long
#define LOG(x) cout << x << endl

bool isValid = true, flag = false;
ll p, q, x, y, z, n, m, cnt = 0, sum = 0, sum1 = 0; 
double f, g;
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
    cin >> f >> g;
    if(ceil((f-2)/g)+1 == 0) 
        LOG(1);
    
    else
        LOG(ceil((f-2)/g)+1);
}

main() {
    int t;
    cin >> t;

    while(t--)
        solve();
        
    return 0;
}