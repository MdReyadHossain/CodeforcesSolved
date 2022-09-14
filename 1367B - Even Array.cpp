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
        int a[n];
        for(int i = 0; i < n; i++) 
            cin >> a[i];
        
        for(int i = 0; i < n; i++) {
            if(i%2 != a[i]%2) {
                isValid = false;
                for(int j = i+1; j < n; j++) {
                    if(j%2 != a[j]%2 && j%2 == a[i]%2) {
                        swap(a[i], a[j]);
                        cnt++;
                        isValid = true;
                        break;
                    }                      
                }

                if(!isValid){
                    cnt = -1;
                    LOG(cnt);
                    break;
                }
            }
        }

        if(cnt >= 0)
            LOG(cnt);

        isValid = true;
        cnt = 0;
    }
}