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
    ll a[m];
    cin >> a[0];
    sum = a[0] - 1;
    for(int i = 1; i < m; i++) {
        cin >> a[i];
        if(a[i] < a[i-1]) 
            sum += (n - a[i-1]) + a[i];
        
        else if(a[i] > a[i-1]) 
            sum += a[i] - a[i-1];        
    }
    
    LOG(sum);
}
 
main() {
    int t;
    // cin >> t;
 
    // while(t--)
        solve();
        
    return 0;
}