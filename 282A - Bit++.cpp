#include <iostream>
using namespace std;
 
main() {
    int x = 0, n;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(s == "X++") {
            x++;
        }
        else if(s == "++X") {
            ++x;
        }
        else if(s == "X--") {
            x--;
        }
        else {
            --x;    
        }
    }
    cout << x << endl;
}