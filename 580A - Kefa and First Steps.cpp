#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	int n, cnt = 0, max = 0;
	cin >> n;
	int a[n], nd[n];

	for(int i = 0; i < n; i++) {
		cin >> a[i];
		nd[i] = 0;

		if(a[i] >= a[i-1] || i == 0)
			cnt++;

		else {
			nd[i] = cnt;
			cnt = 1;
		}

		if(max < nd[i])
			max = nd[i]; 

		if(i == (n-1)) {
			nd[i] = cnt;
			if(max < nd[i])
				max = nd[i]; 
		}
	}

	cout << max << endl;
}