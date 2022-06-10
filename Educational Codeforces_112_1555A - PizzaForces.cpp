#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout << x << endl
#define IN(x) cin >> x

main() {
    long long t, n, slice;
    IN(t);
    for(int i = 0; i < t; i++) {
        IN(n);
        if(n < 6){
            slice = 15;
        }
        else{
            if(n%2 != 0)
                n++;
            slice = (n * 5)/2; 
        }
        LOG(slice);
    }
}