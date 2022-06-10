#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

main() {
    int k, l, m, n, d, cnt = 0;
    cin >> k >> l >> m >> n >> d;
    int dr[d+1];

    for(int i = 1; i <= d+1; i++) {
        if((k*i) <= d)
            dr[k*i] = 100;
        if((l*i) <= d)
            dr[l*i] = 100;
        if((m*i) <= d)
            dr[m*i] = 100;
        if((n*i) <= d)
            dr[n*i] = 100;
    }
    
    for(int i = 1; i <= d+1; i++) {
        if(dr[i] == 100) 
            cnt++;
    }

    LOG(cnt);
}