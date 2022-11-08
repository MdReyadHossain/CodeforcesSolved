#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define ll long long
#define ld long double
#define LOG(x) cout << x << endl

bool isValid = true, flag = false;
int a[1000000] = {0};
pair <string, string> p[3000];
int x, y, z, n, m, cnt = 0, sum = 0, sum1 = 0; 
double f, g;
string s1, s2;

void showArr(int arr[]) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    LOG("");
}

int digit(int n) {
    return (log10(n)+1);
}

void sievePrime() {
    for(int i = 2; i <= 1000000; i++) {
        if(a[i] == 0) {
            for(int j = 2; i*j <= 1000000; j++) 
                a[i*j] = 1;
        }
    }
}

void solve() {
    cin >> n;

    sum = n;
    for(int i = 1; i < n; i++) {
        sum += i * (n - i);
    }
    LOG(sum);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    // sievePrime();

    int t;
    // cin >> t;

    // while(t--)
        solve();

    return 0;
}