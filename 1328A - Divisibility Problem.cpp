#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
    int n, a, b, move = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        if(a%b != 0) {
            move = ((a/b+1)*b) - a;
            cout << move << endl;
        }
        else 
            cout << move << endl;
        
        move = 0;
    }
}