#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define ld long double
#define LOG(x) cout << x << endl

bool isValid = false, flag = false;
int se[1000000] = { 0 };
pair <int, int> p[2000];
vector<string> a;
ll x, y, z, n, m, cnt = 0, sum = 0, sum1 = 0;
double f, g;
string s, s2;

void showArr(ll arr[], ll n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    LOG("");
}

int gcd(int n1, int n2) {
    if (n2 == 0) { return n1; }
    return gcd(n2, n1 % n2);
}

int lcm(int n1, int n2) {
    return (n1 * n2) / gcd(n1, n2);
}

int digit(int n) {
    return (log10(n) + 1);
}

void sievePrime() {
    for (int i = 2; i <= 1000000; i++) {
        if (se[i] == 0) {
            for (int j = 2; i * j <= 1000000; j++)
                se[i * j] = 1;
        }
    }
}

void solve() {
    cin >> n >> y >> x;
    if(y == 1 && x == 1)
        LOG("NO");
    
    else if(n == y && x != n) {
        LOG("YES");
        LOG(1);
        LOG(y);
    }

    else if(x != 1) {
        LOG("YES");
        LOG(n);
        for(int i = 0; i < n; i++) 
            cout << 1 << " ";
        LOG("");
    }

    else if(n%2 == 0 && x == 1) {
        LOG("YES");
        LOG(n/2);
        for(int i = 0; i < n/2; i++) 
            cout << 2 << " ";
        LOG("");
    }

    else {
        if(n < 5 || y < 3)
            LOG("NO");
        
        else {
            LOG("YES");
            LOG(n/2);
            cout << 3 << " ";
            for(int i = 0; i < n/2 - 1; i++) 
                cout << 2 << " ";
            LOG("");
        }
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    // sievePrime();

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}