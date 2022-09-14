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
    long t, n, k, cnt = 0, team = 0, odd = 1; 
    cin >> t;

    for(long j = 0; j < t; j++) {
        string r1, r2;
        cin >> r1 >> r2;
        string s = r1 + r2;

        for(int i = 0; i < 4; i++){
            if(s[i] != '0') {
                for(int k = i+1; k < 4; k++) {
                    if(s[i] == s[k]) 
                        s[k] = '0'; 
                }
                s[i] = '0';
                cnt++;
            }
        }
        LOG(cnt-1);
        cnt = 0;
    }
}