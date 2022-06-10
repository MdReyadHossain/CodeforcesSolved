#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	int n = 4, cnt = 0, scnt = 0;
	//cin >> n; 
	int s[n];
	for(int i = 0; i < n; i++) {
		cin >> s[i];
	}

	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			if(s[i] == s[j] && s[j] != 0) {
				cnt++;
				s[j] = 0;
			}
		}
		scnt = scnt + cnt;
		cnt = 0;
	}
	cout << scnt << endl;
}