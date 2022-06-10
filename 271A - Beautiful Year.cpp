#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	int n, cnt = 0, rcnt = 1;
	string temp;
	cin >> n; 

	while(rcnt != 0) {
		n++;
		rcnt = 0;
		temp = to_string(n);
		for(int i = 0; i < temp.length(); i++) {
			for(int j = i+1; j < temp.length(); j++) {
				if(temp[i] == temp[j]) {
					cnt++;
				}
			}
			if(cnt != 0) {
				cnt = 0;
				rcnt++;
				break;
			}
		}
		n = stoi(temp);
	}
	cout << n << endl;
}