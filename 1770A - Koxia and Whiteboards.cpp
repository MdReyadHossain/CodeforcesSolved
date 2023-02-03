#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define dl double long
#define LOG(x) cout << x << endl

bool isValid = true, flag = false;
pair <int, int> p[10000];
ll x, y, z, n, m, cnt = 0, sum = 0, sum1 = 0; 
double f, g;
string s;


void show_arr(ll arr[], ll n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    LOG("");
}

int digit(int n) {
    return (log10(n)+1);
}

void solve() {
    sum = cnt = 0;
    cin >> n >> m;
    ll a[n], b[m];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < m; i++) 
        cin >> b[i];

    for(int i = 0; i < m; i++) {
        sort(a, a+n);
        a[0] = b[i];
    }

    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    LOG(sum);
}

main() {
    int t;
    cin >> t;

    while(t--)
        solve();
        
    return 0;
}