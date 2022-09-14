#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

void show_arr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    LOG("");
}

int digit(int n) {
    return (log10(n)+1);
}

int func() {
    //..
    return 0;
}

main() {
    bool isValid = true, isBreak = false;
    int t, x, y, n, cnt = 0, sum = 0; 
    string s;
    // cin >> t;

    // for(int k = 0; k < t; k++) {
    //     cin >> n;
        
    // }
    cin >> s;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '.')
            cout << 0 ;
        else {
            if(s[i+1] == '.') {
                cout << 1;
                i++;
            }
            else {
                cout << 2;
                i++;
            }
        } 
    }
}