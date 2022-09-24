#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define ll long long
#define ld long double
#define LOG(x) cout << x << endl
 
bool isValid = false, flag = false;
pair <int, int> p[10000];
int x, y, z, n, m, cnt = 0, sum = 0, sum1 = 0; 
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
    if (n < m) {
        LOG(-1);
    }

    else if(n%2 == 0) {
        if(n/2 <= m)
            LOG(m);

        else {
            while((m*cnt) < (n/2)) {
                cnt++;
            }

            LOG(m*cnt);
        }
    }

    else {
        if((n/2)+1 <= m) 
            LOG(m);

        else {
            while((m*cnt) < ((n/2)+1)) {
                cnt++;
            }

            LOG(m*cnt);
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