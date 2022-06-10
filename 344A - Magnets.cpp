#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	int n , cnt = 0;
	cin >> n;
	int m[n], i = 0;

	while(i < n) {
		cin >> m[i];
		if(m[i] != m[i-1] && i != 0)
			cnt++;
		i++;
	} 
	cnt++;
	
	cout << cnt << endl;
}