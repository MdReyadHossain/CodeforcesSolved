#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	string b1, b2;
	cin >> b1 >> b2;
	
	for(int i = 0; i < b1.length(); i++) {
		if(b1[i] == '0' && b2[i] == '0' || b1[i] == '1' && b2[i] == '1')
			cout << '0' ;
		else
			cout << '1'; 
	}
}