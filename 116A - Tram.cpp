#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	int n, a, b; 
	cin >> n;

	int tram[n];
	tram[0] = 0;
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		tram[i] = tram[i] - a;
		tram[i] = tram[i] + b;
		tram[i+1] = tram[i];
	}
	
	int max = tram[0];
	for(int i = 0; i < n; i++) {
		if(max < tram[i])
        	max = tram[i];
	}

	cout << max << endl;
}