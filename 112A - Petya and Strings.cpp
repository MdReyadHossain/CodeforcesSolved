#include<iostream>
#include <string>
using namespace std;
 
main() {
    int flag = 0;
    string s1, s2;
    cin >> s1 >> s2;
    
    for(int i = 0; i < s1.length(); i++) {
        for(int j = i; j <= i; j++) {
            if(int(s1[i]) < 97) {
                s1[i] = char(s1[i] + 32);
            }

            if(int(s2[i]) < 97) {
                s2[i] = char(s2[i] + 32);
            }

            if(int(s1[i]) >= 97 || int(s2[i]) >= 97) {
                if(s1[i] == s2[j]) {
                    flag = 0;
                }

                else if(s1[i] < s2[j]) {
                    flag--;
                    break;
                    }
                
                else if(s1[i] > s2[j]) {
                    flag++;
                    break;
                }
            }
        }
        if(flag != 0) {
            break;
        }
    }
    cout << flag << endl;
}