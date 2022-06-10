#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	int n, a = 0, d = 0;
	string s;
	cin >> n >>s;

	for(int i = 0; i < n; i++) {
		if(s[i] == 'A')
			a++;
		else
			d++;
	}

	if(d < a) 
		cout << "Anton" << endl;
	
	if(a < d) 
		cout << "Danik" << endl;
	
	if(a == d) 
		cout << "Friendship" << endl;
}