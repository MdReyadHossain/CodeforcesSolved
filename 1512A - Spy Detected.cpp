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
    int t, n, m, spy, dct, cnt = 0; 
    cin >> t;

    for(int k = 0; k < t; k++) {
        cin >> n;
        int a[n];
        cin >> a[0]; 
        for(int i = 1; i < n; i++) {
            cin >> a[i];
            if(a[i] != a[i-1]) {
                if(cnt == 0){
                    spy = i;
                }
                else {
                    spy = i+1;
                    cnt = 0;
                }
            }
            else {
                cnt++;
            }
        }
        LOG(spy);
        cnt = 0;
    }
}