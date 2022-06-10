#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
 
main() {
    string str1, str2; 
    int count = 0, n, t;
    cin >> t;
    int per[t];
    for(int j = 0; j < t; j++) {
        cin >> n;
        cin >> str1;
        str2 = str1;
        sort(str1.begin(), str1.end());

        for(int i = 0;i < str1.length(); i++) {
            if(str1[i] != str2[i])
                count++; 
        }
        per[j] = count;
        count = 0;
    }
    for(int i = 0; i < t; i++) {
        cout << per[i] << endl;
    }
}