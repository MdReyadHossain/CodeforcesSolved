#include <iostream>
using namespace std;

main() {
    int count = 0;
    char v[] = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};

    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        for(int j = 0; j < 12; j++) {
            if(s[i] == v[j]) {
                count++;
                break;
            }
        }
        if (count == 0) {
            if(int(s[i]) < 97) {
                cout << "." << char(s[i] + 32);
            }
            else{
                cout << "." << s[i];
            }
        }
        count = 0;
    }
}