#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define dl double long
#define LOG(x) cout << x << endl

bool isValid = true, flag = false;
ll p, q, x, y, z, n, m, cnt = 0, sum = 0, sum1 = 0; 
dl x10;
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
    cin >> s;
    for(int i = 0; i < s.length()/2; i++) {
        sum += s[i] - 48;
        sum1 += s[s.length()/2+i] - 48; 
    }
    if(sum == sum1) 
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