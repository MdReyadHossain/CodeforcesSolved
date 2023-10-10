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
string s, s1, s2, s3;
char c;

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
    c = '.';
    cin >> s1 >> s2 >> s3;

    if(s1[0] == s1[1] && s1[1] == s1[2]) 
        c = s1[0];
    
    if(s2[0] == s2[1] && s2[1] == s2[2]) 
        c = s2[0];
    
    if(s3[0] == s3[1] && s3[1] == s3[2]) 
        c = s3[0];
    
    if(s1[0] == s2[1] && s2[1] == s3[2])
        c = s1[0];
    
    if(s3[0] == s2[1] && s2[1] == s1[2]) 
        c = s3[0];
    
    for(int i = 0; i < 3; i++) {
        if(s1[i] == s2[i] && s2[i] == s3[i]) {
            c = s1[i];
            break;
        }
    }

    if(c == '.')
        LOG("DRAW");
    else 
        LOG(c);
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