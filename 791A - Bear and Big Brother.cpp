#include<bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	int a, b, cnt = 0;
	cin >> a >> b;

	for(int i = 1; i <= b; i++) {
		a = a*3;
		b = b*2;
		cnt++;
		if(a > b)
			break;
	}
	
	cout << cnt << endl;
}