#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

main() {
    bool isValid = true;
    int n, police = 0, cnt = 0;
    cin >> n;
    int c[n];

    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }

    for(int i = 0; i < n; i++) {
        if(c[i] == -1) {
            if(police != 0) {
                c[i] = 0;
                police--;  
            }
            else
                cnt++;
        }
        else 
            police = police + c[i];
    }

    LOG(cnt);
}