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

    for(long i = 0; i < t; i++) {
        cin >> n;
        if((n/2)%2 != 0)
            LOG("NO");

        else {
            LOG("YES");
            for(long j = 0, evn = 2; j < n || evn < n/2; j++, evn+=2) {
                if(j > (n/2)-1) {
                    if(j == n-2) {
                        cout << odd << " ";
                        odd = odd + (2*((n/4)+1));
                    }
                    else {
                        cout << odd << " ";
                        odd+=2;
                    }
                }
                else {
                    cout << evn << " ";
                }
            }
            odd = 1;
            LOG(""); 
        } 
    }
}