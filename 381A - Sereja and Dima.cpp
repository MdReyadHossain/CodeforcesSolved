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
    int t, x, y, n, cnt_s = 0, cnt_d = 0, sum = 0; 
    string s;
    // cin >> t;

    // for(int k = 0; k < t; k++) {
        cin >> n;
        int a[n];
        x = 0, y = n-1;
        for(int i = 0; i < n; i++) 
            cin >> a[i];

        for(int i = 0; i < n; i++) {
            if(a[x] >= a[y]) {
                if(i%2 == 0)
                    cnt_s += a[x];
                else 
                    cnt_d += a[x];

                x++;  
            }

            else {
                if(i%2 == 0)
                    cnt_s += a[y];
                else 
                    cnt_d += a[y];

                y--;
            }
        }

        cout << cnt_s << " " << cnt_d << endl;
    // }
}