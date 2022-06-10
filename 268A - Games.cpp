#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

main() {
    int n, host = 0, cnt = 0;
    cin >> n;
    int team[n*2];

    for(int i = 0; i < n*2; i++) {
        cin >> team[i];
    }
    
    for(int i = 0; i < n*2; i++) {
        host = team[i];
        for(int j = i+1; j < n*2; j++) {
            if(host == team[j]) {
                if(i%2 == 0) {
                    if(j%2 != 0) {
                        cnt++;
                    }
                }

                else {
                    if(j%2 == 0) {
                        cnt++;
                    }
                }
            }
        }
    }

    LOG(cnt);
}