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
    int card, joker;
    cin >> n >> m >> x;
    if(n/x > m) 
        LOG(m);
    
    else {
        card = n/x;
        joker = m - card;
        if(joker % (x - 1) == 0) 
            LOG(card - (joker / (x - 1)));
        
        else{
            LOG(card - ((joker / (x - 1)) + 1));
        }
    }
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