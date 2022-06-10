#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout << x << endl
#define IN(x) cin >> x

main() {
    long long n, k, num;
    IN(n);
    IN(k);

    if(n%2 == 0) {
        if(k <= n/2) {
            num = 1;
            for(int i = 1; i < k; i++) {
                num = num + 2;
            }
            LOG(num);
        }
        else{
            k = k - n/2;
            num = 2;
            for(int i = 1; i < k; i++) {
                num = num + 2;
            }
            LOG(num);
        }
    }
    else{
        if(k <= (n+1)/2) {
            num = 1;
            for(int i = 1; i < k; i++) {
                num = num + 2;
            }
            LOG(num);
        }
        else{
            k = k - (n+1)/2;
            num = 2;
            for(int i = 1; i < k; i++) {
                num = num + 2;
            }
            LOG(num);
        }
    }
}