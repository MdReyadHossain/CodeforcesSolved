#include <iostream>
#include <string>
using namespace std;

int main(){
	int num, count = 0;
	string str;
	cin >> num; 
	if(((num % 4) == 0) || ((num % 7) == 0) || ((num % 44) == 0) || ((num % 47) == 0) | ((num % 74) == 0) || ((num %444) == 0) || ((num % 447) == 0) || ((num % 474) == 0) || ((num % 477) == 0)) {
		cout << "YES" << endl;
	}
	else {
        cout << "NO" << endl;
	}
}