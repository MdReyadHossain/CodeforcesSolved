#include <iostream>
using namespace std;

main() {
    string p;
    cin >> p;

    bool flag = false;
    for(int i = 0; i < p.length(); i++) {
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
            flag = true;
            break;
        } 
    }
    if(flag)
        cout << "YES" << endl; 
    else
        cout << "NO" << endl;
}