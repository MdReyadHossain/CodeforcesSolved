#include<bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	int k, n, w, sum = 0;
	cin >> k >> n >> w;

	for(int i = 1; i <= w; i++) {
		sum = i*k + sum;
	}

	if(sum-n >= 0)
		cout << sum-n << endl;

	else
		cout << 0 << endl;
}