#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	int n, p, cnt = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> p;
		if(p == 1)
			cnt++;
	}
	if(cnt == 0)
		cout << "EASY" << endl;

	if(cnt != 0)
		cout << "HARD" << endl;
}