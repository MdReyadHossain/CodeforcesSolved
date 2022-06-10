#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	long long n, sum = 0;
	cin >> n;
	
	if(n%2 == 0) 
		sum = pow(-1, n)*n/2;
	
	else
		sum = pow(-1, n)*(n+1)/2;

	cout << sum << endl;
}