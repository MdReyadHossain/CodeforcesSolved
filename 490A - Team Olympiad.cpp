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
    int t = 0, n, k = 1, cnt = 0; 
    cin >> n;
    int a[n], x[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(a[i] != 0 && a[i] == k && k <= 3){
            x[t] = i+1;
            a[i] = 0;
            i = -1;
            t++;
            k++;
        }
        else if(k > 3) {
            k = 1;
            i = -1;
            cnt++;
        }
    }

    LOG(cnt);

    for(int i = 0; i < 3*cnt; i+=3) {
        cout << x[i] << " " << x[i+1] << " " << x[i+2] << endl;
    }
}