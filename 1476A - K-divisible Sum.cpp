#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define ll long long
#define ld long double
#define LOG(x) cout << x << endl

bool isValid = false, flag = false;
pair <int, int> p[3000];
ll x, y, z, n, m, cnt = 0, sum = 0, sum1 = 0; 
double f, g;
string s[3000];

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
    cin >> n >> x;
    
    if(x > n) {
        if(x%n != 0) 
            LOG((x / n) + 1);
        
        else
            LOG(x / n);
    }
 
    else {
        if(n%x == 0) {
            x *= n / x;
            if(x%n != 0) {
                LOG((x / n) + 1);
            }
            else
                LOG(x / n);
        }
        else {
            x *= (n / x) + 1;
            if(x%n != 0) 
                LOG((x / n) + 1);
            
            else
                LOG(x / n);
        }
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}