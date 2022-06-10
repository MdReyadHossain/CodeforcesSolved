#include<bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
	string user;
	int cnt = 0;

	cin  >> user;
	sort(user.begin(), user.end());

	for(int i = 0; i < user.length(); i++) {
		if(user[i] == user[i+1])
			cnt++;
	}

	int gen = user.length() - cnt;

	if(gen%2 == 0)
		cout << "CHAT WITH HER!" << endl;
	else
		cout << "IGNORE HIM!" << endl;
}