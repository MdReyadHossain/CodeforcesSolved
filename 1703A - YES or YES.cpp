#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define ll long long
#define ld long double
#define LOG(x) cout << x << endl

bool isValid = true, flag = false;
pair <int, int> p[3000];
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
    isValid = true;
    cin >> s;
    if(s[cnt] == 'y' || s[cnt] == 'Y') {
        if(s[cnt + 1] == 'e' || s[cnt + 1] == 'E') {
            if(s[cnt + 2] == 's' || s[cnt + 2] == 'S')
                LOG("YES");
            else
                isValid = false;
        }
        else
            isValid = false;
    }

    else
        isValid = false;

    if(!isValid)
        LOG("NO"); 
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