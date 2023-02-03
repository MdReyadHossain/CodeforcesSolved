#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define ll long long
#define ld long double
#define LOG(x) cout << x << endl

bool isValid = true, flag = false;
int se[1000000] = {0};
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

int gcd(int n1, int n2) {
    if(n2 == 0) {return n1;}
    return gcd(n2, n1 % n2);
}

int lcm(int n1, int n2) {
    return (n1 * n2)/gcd(n1, n2);
}

int digit(int n) {
    return (log10(n)+1);
}

void sievePrime() {
    for(int i = 2; i <= 1000000; i++) {
        if(se[i] == 0) {
            for(int j = 2; i*j <= 1000000; j++) 
                se[i*j] = 1;
        }
    }
}

void solve() {
    sum = 0;
    cin >> n >> m >> x >> y;
    string s[n];
    if((2*x) < y)
        z = 2*x;
    else 
        z = y;

    for(int i = 0; i < n; i++) {
        cnt = 0;
        cin >> s[i];
        for(int j = 0; j < m; j++) {
            if(s[i][j] == '.' && s[i][j-1] == '.' && j != 0) {
                cnt++;
                s[i][j] = '-';
                s[i][j-1] = '-';
            }
            
            else if(s[i][j] == '*' && s[i][j-1] == '.' && j != 0) 
                sum += x;
            
            else if(s[i][m-1] == '.' && j == m-1) 
                sum += x;
        }
        sum += cnt * z;
    }

    LOG(sum);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    // sievePrime();

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}