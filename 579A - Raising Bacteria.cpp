#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define ll long long
#define dl double long
#define LOG(x) cout << x << endl
 
bool isValid = false, flag = false;
pair <int, int> p[10000];
ll x, y, z, n, m, cnt = 0, sum = 0, sum1 = 0; 
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
    cin >> n;
    z = n;
    
    while(z != 0) {
        x = log2(z);
        sum += pow(2, x);
        z = n - sum;
        cnt++;
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