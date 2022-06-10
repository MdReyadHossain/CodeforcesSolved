#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	int n;
	cin >> n;
	double p[n], sum = 0, total = n;

	for(int i = 0; i < n; i++) {
		cin >> p[i];

		sum = sum + (p[i]/100);
	}

	sum = sum * (1/total) * 100;
	cout << fixed << setprecision(12) << sum << endl;
}