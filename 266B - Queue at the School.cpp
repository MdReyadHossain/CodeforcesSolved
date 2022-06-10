#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	int n, t;
	string s;
	cin >> n >> t >> s;
	for(int k = 0; k < t; k++) {
		for(int i = s.length()-1; i >= 0; i--) {
			if(s[i] == 'B' && i != s.length()-1 && s[i+1] == 'G') {
				s[i] = 'G';
				s[i+1] = 'B';
				if(s[i-1] == 'B')
					i--;
			}
		}
	}

	cout << s << endl;
}