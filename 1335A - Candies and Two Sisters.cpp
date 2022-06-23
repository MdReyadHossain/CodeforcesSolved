#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

main() {
    bool isValid = true;
    int t, sum = 0, n; 
    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> n;
        if(n%2 == 0) 
            sum = n/2 - 1;
        else 
            sum = n/2;

        LOG(sum);
    }
}