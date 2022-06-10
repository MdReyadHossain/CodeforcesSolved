#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	long long n, k, cnt = 0;
	cin >> n >> k;
	string s = to_string(n);

	for(int i = 0; i < k; i++) {
		if(s[s.length()-1] != '0') {
			n = n - 1;
			s = to_string(n);
		}

		else{
			n = n / 10;
			s = to_string(n);
		}
	} 

	cout << n << endl;
}