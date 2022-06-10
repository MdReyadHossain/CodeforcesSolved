#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	int n, p, q, cnt = 0;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> p >> q;

		if(q-p >= 2)
			cnt++;
	}
	cout << cnt << endl;
}