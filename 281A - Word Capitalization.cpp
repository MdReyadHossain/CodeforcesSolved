#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout << x << endl

main() {
    string str;
    cin >> str;
    if(str[0] > 96) 
        str[0] = str[0] - 32;
    cout << str;
}