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
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            sum1 += j;
        }
        if((sum+sum1) <= n) {
            sum += sum1;
            cnt++;
            sum1 = 0;
        }
        else 
            break;
    }
    LOG(cnt);
}

main() {
    int t;
    // cin >> t;

    // while(t--) 
        solve();
        
    return 0;
}