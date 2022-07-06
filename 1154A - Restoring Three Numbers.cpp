#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define LOG(x) cout << x << endl
 
int max_num(long long x[]) {
    int max = 0;
    for(int i = 0;  i < 4; i++) {
        if(x[i] >= max) {
            max = x[i];
        }
    }
    return max;
}

main() {
    bool isValid = false;
    long long x[4], cnt= 0; 
    cin >> x[0] >> x[1] >> x[2] >> x[3];
    
    for(int i = 0; i < 4; i++) {
        if(x[i] != max_num(x)) {
            cout << max_num(x) - x[i] << " ";
        }
    }
}