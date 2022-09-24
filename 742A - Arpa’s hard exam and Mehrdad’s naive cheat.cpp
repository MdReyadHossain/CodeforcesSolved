#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define ll long long
#define ld long double
#define LOG(x) cout << x << endl
 
bool isValid = false, flag = false;
pair <string, string> p[3000];
long x, y, z, n, m, cnt = 0, sum = 0, sum1 = 0; 
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
    cin >> n;
    if(n == 0) {
        LOG(1);
    }

    else {
        x = n - (4*(n/4));
        if(x == 0)
            x = 4;
        
        switch(x)
        {
            case 1:
                LOG(8);
                break;

            case 2:
                LOG(4);
                break;

            case 3:
                LOG(2);
                break;

            case 4:
                LOG(6);
                break;
            
            default:
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