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
    int odd = 1, even = 2;
    cin >> n;
    if(n == 2) {
        LOG(-1);
    }
    else {
        for(int i = 1; i <= (n*n); i++) {
            if(odd <= n*n) {
                cout << odd << " ";
                odd += 2;
            }
            else if(even <= n*n && odd >= n*n || odd >= ((n*n)-1)) {
                cout << even << " ";
                even += 2;
            }
            if(i%n == 0) 
                LOG("");
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