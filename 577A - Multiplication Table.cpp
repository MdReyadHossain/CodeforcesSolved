#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define ll long long
#define ld long double
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
    cin >> n >> x;
    if(x == 1) {
        LOG(1);
    }

    else if(n < x) {
        if(n*n > x) {
            for(int i = 2; i <= n; i++) {
                if(x%i == 0) {
                    if(x/i <= n)
                        cnt++;
                }
            }
        }

        else if(n*n == x)
            cnt++; 
        
        LOG(cnt);
    } 

    else {
        cnt += 2;
        for(int i = 2; i <= n; i++) {
            if(x != i) {
                if(x%i == 0) {
                    if(x/i <= n)
                        cnt++;
                }
            }
        }

        LOG(cnt);
    }
}

main() {
    int t;
    // cin >> t;

    // while(t--)
        solve();

    return 0;
}