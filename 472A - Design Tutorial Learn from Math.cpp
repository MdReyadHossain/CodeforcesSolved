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
    double t, n, cnt0 = 0, cnt1 = 0; 
    cin >> n;
    double a[2];

    a[0] = int(n/2);
    a[1] = ceil(n/2);
    
    while(!isValid) {
        for(int i = 2; i < int(a[1])/2; i++) {
            if(int(a[0])%i == 0) 
                cnt0++;

            if(int(a[1])%i == 0) 
                cnt1++;
        }

        if(cnt0 != 0 && cnt1 != 0) 
            isValid = true;

        else {
            a[0]--;
            a[1]++;
        }

        cnt0 = 0;
        cnt1 = 0;
    }

    cout << int(a[0]) << " " << int(a[1]) << endl;
}