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
    double t, n, cnt0 = 0, cnt1 = 0; 
    cin >> t;

    for(int i = 0; i < t; i++) {
        string s; 
        cin >> s;
        
        cout << s[0];
        for(int j = 0; j < s.length()-1; j=j+2) {
            cout << s[j+1];
        }
        LOG("");
    }
}