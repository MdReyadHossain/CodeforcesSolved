#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
    int m, index, cnt = 0;
    cin >> m;

    int p1, p2, p[m+1];

    cin >> p1;
    for(int i = 0; i < p1; i++) {
        cin >> index;
        p[index] = 1;
    }

    cin >> p2; 
    for(int i = 0; i < p2; i++) {
        cin >> index;
        p[index] = 1;
    }


    for(int i = 1; i <= m; i++) {
        if(p[i] != 1) {
            cout << "Oh, my keyboard!";
            cnt++;
            break;
        }
    }
    if(cnt == 0)
        cout << "I become the guy.";
}