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
    string s[n], st[n];
    int a[n];
    for(int i = 0; i < n; i++) 
        cin >> s[i];
    
    for(int i = 0; i < n; i++) {
        if(s[i] != "0") {
            for(int j = i+1; j < n; j++) {
                if(s[i] == s[j]) {
                    s[j] == "0";
                    sum++;
                }
            }
            st[cnt] = s[i];
            a[cnt] = sum;
            cnt++;
        }
        sum = 0;
    }

    for(int i = 0; i < n; i++) {
        if(a[i] == *max_element(a, a+n)) {
            LOG(s[i]);
            break;
        }
    }
}

main() {
    int t;
    // cin >> t;
 
    // while(t--)
        solve();
        
    return 0;
}