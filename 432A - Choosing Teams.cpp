#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

int func() {
    //..
    return 0;
}

main() {
    bool isValid = false, isBreak = false;
    int t, n, k, cnt = 0, team = 0; 
    cin >> n >> k;
    int y[n];

    for(int i = 0; i < n; i++) {
        cin >> y[i];
        
        if(y[i]+k <= 5) 
            cnt++;
        
        if(cnt == 3) {
            team++;
            cnt = 0;
        }
    }

    LOG(team);
}