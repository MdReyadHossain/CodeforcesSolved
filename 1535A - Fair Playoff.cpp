#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define LOG(x) cout << x << endl

bool isValid = false, flag = false;
long p, q, x, y, n, m, cnt = 0, sum = 0; 
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
    int cnt1 = 0, cnt2 = 0;
    cnt = 0;
    // cin >> n;
    long a[4];
    for(int i = 0; i < 4; i++) 
        cin >> a[i];
    
    for(int i = 0; i < 4; i++) {
        if(a[i] == *max_element(a, a+4)) {
            a[i] = 0;
            if(i == 0 || i == 1)
                cnt1++;
            else
                cnt2++;
            cnt++;            
            if(cnt == 2)
                break; 
            
            i = -1;
        }
    }
    if(cnt1 == cnt2)
        LOG("YES");
    
    else
        LOG("NO");
}

main() {
    int t;
    cin >> t;

    while(t--) 
        solve();
        
    return 0;
}