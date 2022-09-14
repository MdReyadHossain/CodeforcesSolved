#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define LOG(x) cout << x << endl

bool isValid = false, flag = false;
ll p, q, x, y, z, n, m, cnt = 0, sum = 0, sum1 = 0; 
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
    cin >> x >> y >> z >> n;
    p = max(max(x, y), z);
    sum = n - ((p-x) + (p-y) + (p-z));
    if(sum >= 0) {
        if(sum%3 == 0)
            LOG("YES");

        else
            LOG("NO"); 
    }

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