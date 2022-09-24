#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define ll long long
#define ld long double
#define LOG(x) cout << x << endl
 
bool isValid = false, flag = false;
pair <string, string> p[3000];
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
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        cin >> p[i].first >> p[i].second;
    }
    for(int i = 0; i < n; i++) {
        cin >> s[i];
        for(int j = 0; j < m; j++) {
            if(s[i] == p[j].first) {
                if(p[j].first.length() <= p[j].second.length()) 
                    s[i] = p[j].first;
                
                else 
                    s[i] = p[j].second;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
}

main() {
    int t;
    // cin >> t;

    // while(t--)
        solve();

    return 0;
}