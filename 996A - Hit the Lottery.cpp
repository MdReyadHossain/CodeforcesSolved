#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

main() {
    int n, n1 = 0, n5 = 0, n10 = 0, n20 = 0, n100 = 0, sum= 0;
    cin >> n;
    
    n100 = n/100;
    n20 = (n%100)/20;
    n10 = ((n%100)%20)/10;
    n5 = (((n%100)%20)%10)/5;
    n1 = ((((n%100)%20)%10)%5)/1;

    sum = n1 + n5 + n10 + n20 + n100;
    LOG(sum);
}