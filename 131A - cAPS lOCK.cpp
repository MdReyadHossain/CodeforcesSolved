#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	string s, c;
	cin >> s;	
	c = s;

	int cnt = 0, flag = 0;
	if(s[0] >= 97 && s[0] <= 122) { // lower case
		c[0] = s[0] - 32;
		flag = 1;
	}

	for(int i = 1; i < s.length(); i++) {
		if(s[i] >= 65 && s[i] <= 90) // upper case
			c[i] = s[i] + 32;

		else if(s[i] >= 97 && s[i] <= 122){ // lower case
			cnt++;
			break;
		}
	}

	if(cnt != 0)
		cout << s << endl;
	
	else {
		if(flag == 0 && cnt == 0)
			c[0] = s[0] + 32;
		cout << c << endl;
	}
}