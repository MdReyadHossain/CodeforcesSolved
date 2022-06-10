#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	int n, h, cnt = 0;
	cin >> n >> h;
	int a[n];

	for(int i = 0; i < n; i++) {
		cin >> a[i];

		if(a[i] > h) {
			cnt = cnt + 2;
		}
		else
			cnt++;
	}
	cout << cnt << endl;
}