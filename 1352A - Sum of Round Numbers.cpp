#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

int countdigit(int n) {
    int count =  (log10(n)+1);
    return count;
}

main() {
    bool isValid = true;
    int t, n, cnt= 0, digit; 
    double x;
    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> n;
        digit = countdigit(n);
        int k[digit];

        for(int j = 0; j < digit; j++) {
            x = pow(10, countdigit(n)-1);
            if(n%(int)x != 0) {
                k[j] = (n/(int)x) * (int)x;
                n = n%(int)x;
                cnt++;
            }
            else {
                k[j] = (n/x) * x;
                k[j+1] = 0;
                cnt++;
                break;
            }
        }

        // outup
        LOG(cnt);
        for(int j = 0; j < digit; j++) {
            if(k[j] != 0)
                cout << k[j] << " ";
            else 
                break;
        }
        LOG("");
        cnt = 0;
    }    
}