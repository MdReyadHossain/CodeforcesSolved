#include <iostream>
using namespace std;

main() {
	string stone;
	int cnt = 0, n;
	
	cin >> n;
	cin >> stone;

	for(int i = 0; i < n; i++) {

		if(stone[i] == stone[i+1])
			cnt++;
			
	}
	cout << cnt << endl;
}