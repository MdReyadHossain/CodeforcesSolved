#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

main() {
    bool isValid = true;
    int cnt = 0;
    string s;
    getline(cin, s);
    char store[s.length()];

    sort(s.begin(), s.end());
    
    for(int i = 0; i < s.length()-1; i++) {
        if(s[i] != 44 && s[i] != 123 & s[i] != 125 && s[i] != 32) {
            if(s[i] != s[i+1])
                cnt++;
        } 
    }

    LOG(cnt);
}