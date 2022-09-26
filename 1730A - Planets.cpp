#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define ll long long
#define ld long double
#define LOG(x) cout << x << endl

bool isValid = false, flag = false;
pair <int, int> p[3000];
int x, y, z, n, m, cnt = 0, sum = 0, sum1 = 0; 
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
    int plnt = 0;
    cin >> n >> x;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a+n);
    for(int i = 0; i < n; i++) {
        cnt = 1;
        while(a[i+1] == a[i]) {
            cnt++;
            i++;
        }

        sum += cnt;
        sum1 += x;
        if(sum <= sum1) 
            plnt += sum;
        
        else
            plnt += sum1;
        
        sum = sum1 = 0;
    }

    LOG(plnt);
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