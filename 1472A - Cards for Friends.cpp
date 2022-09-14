#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define LOG(x) cout << x << endl

bool isValid = false, flag = false;
long p, q, x, y, n, m, cnt = 0, sum = 0; 
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
    cnt = 1;
    cin >> x >> y >> n;
    long a[n];
    if(x%2 == 0 || y%2 == 0) {
        p = x;
        q = y;
        if(x%2 == 0) {
            for(int i = 0; i < p; i++) {
                if(x%2 == 0) {
                    x /= 2;
                    cnt *= 2;
                }
            }
        }

        if(y%2 == 0) {
            for(int i = 0; i < q; i++) {
                if(y%2 == 0) {
                    y /= 2;
                    cnt *= 2;
                }
            }
        }
    }

    if(cnt >= n) 
        LOG("YES");
    
    else 
        LOG("NO");
}

main() {
    int t;
    cin >> t;

    while(t--) 
        solve();
        
    return 0;
}