#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

void remove(int a[], int n) {
    bool isValid = false, isBreak = false;
    int cnt = 0;

    for(int j = 0; j < n; j++) {
        if(n == 1) {
            isValid = true;
            LOG("YES");
            break;
        }
        else {
            for(int k = j; k < n-1; k++) {
                if(abs(a[k] - a[k+1]) <= 1) {
                    cnt++;
                    if(cnt == (n-1)) {
                        isValid = true;
                        break;
                    }
                }

                else {
                    isBreak = true;
                    break;
                }
            }
        }
        
        if(isValid) {
            LOG("YES");
            break;
        }
        if(isBreak) {
            break;
        }
    }
    if(!isValid)
        LOG("NO");
}

void sort(int a[], int n) {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cnt = 0;
        for(int j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                cnt++;
            }
        }
        if(cnt == 0)    
            break; 
    }

    remove(a, n);
}

main() {
    int t, n, cnt = 0, count = 0; 
    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> n;
        int a[n];
        for(int j = 0; j < n; j++){
            cin >> a[j];
        }
        sort(a, n);
    }
}