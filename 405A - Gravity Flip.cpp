#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
main() {
    int n, cnt = 0;
    cin >> n;
	int s[n];
 
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
 
    sort(s, s + n);
 
    for(int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
}