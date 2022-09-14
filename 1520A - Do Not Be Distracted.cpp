#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

int func() {
    //..
    return 0;
}

main() {
    bool isValid = true, isBreak = false;
    int t, x, y, n, cnt = 0, sum = 0; 
    string s;
    cin >> t;

    for(int k = 0; k < t; k++) {
        cin >> n;
        cin >> s;

        for(int i = 0; i < n; i++) {
            if(s[i] != s[i+1]) {
                cnt = i;
                cnt++;
                while(cnt < n) {
                    if(s[i] == s[cnt]) {
                        isValid = false;
                        break;
                    }
                    cnt++;
                }
            }
            if(!isValid) {
                LOG("NO");
                break;
            }
        }
        if(isValid)
            LOG("YES");
        
        cnt = 0;
        isValid = true;
    }
}