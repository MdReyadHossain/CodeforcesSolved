#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	int sum, max_val = 0, a, b, c;
	cin >> a >> b >> c;
	for(int i = 0; i < 5; i++) {
		if(i == 0)
			sum = a + b * c;
		else if(i == 1)
			sum = a * (b + c);
		else if(i == 2)
			sum = a * b * c;
		else if(i == 3)
			sum = a + b + c;
		else
			sum = (a + b) * c;

            
		if(max_val < sum)
			max_val = sum;
	}
	cout << max_val;
}