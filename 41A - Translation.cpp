#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	string s, t;
	cin >> s >> t;

	int j = s.length()-1, cnt = 0;

	if(s.length() == t.length()) {
		for(int i = 0; i < t.length(); i++) {
			if(s[j] != t[i]) {
				cout << "NO" << endl;
				cnt++;
				break;
			}
			j--;
		}
		if(cnt == 0)
			cout << "YES" << endl;
	}

	else
		cout << "NO" << endl;
}