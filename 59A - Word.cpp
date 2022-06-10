#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	string s;
	int cnt = 0, CNT = 0;
	cin >> s;

	for(int i = 0; i < s.length(); i++) {
		if(s[i] >= 65 && s[i] <= 90)
			CNT++;
		else
			cnt++;
	}

	if(CNT > cnt) {
		for(int i = 0; i < s.length(); i++) {
			if(s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32;
		}
	}

	else {
		for(int i = 0; i < s.length(); i++) {
			if(s[i] >= 65 && s[i] <= 90)
				s[i] = s[i] + 32;
		}
	}
	cout << s;
}