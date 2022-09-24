#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define ll long long
#define ld long double
#define LOG(x) cout << x << endl
 
bool isValid = false, flag = false;
pair <int, int> p[10000];
ll x, y, z, n, m, cnt = 0, sum = 0, sum1 = 0; 
ld f, g;
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
    if(n == 1 && m == 10)
        LOG(-1);

    else if(m < 10) {
        cout << m;
        for(int i = 1; i < n; i++) {
            cout << 0;
        } 
    }

    else {
        cout << m;
        for(int i = 2; i < n; i++) {
            cout << 0;
        } 
    }
}

main() {
    int t;
    // cin >> t;
 
    // while(t--)
        solve();
        
    return 0;
}