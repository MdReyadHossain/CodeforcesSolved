#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	int n;
	cin >> n;
	int p[n], r[n];

	for(int i = 0; i < n; i++) {
		cin >> p[i];
		r[p[i]] = i+1;
	}
	for(int i = 1; i <= n; i++)
		cout << r[i] << " "; 
}