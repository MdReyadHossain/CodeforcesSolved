#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	int n;
	cin >> n;
	
	for(int i = 1; i <= n; i++) {
		if(i%2 != 0)
			cout << "I hate ";
		else if(i%2 == 0)
			cout << "I love ";
		if(i == n) {
			cout << "it ";
			break;
		}
		cout << "that ";
	}
}