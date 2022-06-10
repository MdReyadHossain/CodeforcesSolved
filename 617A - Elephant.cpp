#include<bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	int x, cnt = 0;
	cin >> x;
	int temp = x;

	for(int i = 0; i < temp; i++) {
		if(x > 5){
			x = x-5;
			cnt++;
		}

		else {
			cnt++;
			break;
		}
	}

	cout << cnt << endl;
}