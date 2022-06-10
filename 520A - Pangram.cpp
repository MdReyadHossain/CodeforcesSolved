#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

main() {
    int cnt = 0, n;
    string s;
    cin >> n >> s;

    for(int i = 0; i < s.length(); i++) {
        if (s[i] >= 97 && s[i] <= 122) {
            s[i] = s[i] - 32;
        }
    }

    sort(s.begin(), s.end());
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != s[i+1]){
            cnt++;
        }
    }
    if(cnt < 26)
        cout << "NO" << endl;
    
    else 
        cout << "YES" << endl;
}