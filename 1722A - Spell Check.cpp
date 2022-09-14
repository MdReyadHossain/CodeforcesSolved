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
    int t, n, m, x, y, cnt = 0; 
    string s, d = "Timur";
    cin >> t;
 
    for(int k = 0; k < t; k++) {
        cin >> n;
        cin >> s;
        if(n != 5) {
            LOG("NO");
            continue;
        }
        
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                if(d[i] == s[j]) {
                    cnt++;
                    break;
                }
            }
        }
        if(cnt == 5)
            LOG("YES"); 
        else 
            LOG("NO"); 
        cnt = 0;
    }
}