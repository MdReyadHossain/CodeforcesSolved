#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

main() {
    bool isValid = true;
    int a, b, cnt_diff = 0, cnt_same = 0;
    cin >> a >> b;
    int n = max(a, b);
    for(int i = 0; i < n; i++) {
        if(a != 0 && b != 0) {
            a--;
            b--;
            cnt_diff++;
        }
        else {
            cnt_same = max(a, b)/2;
            break;
        }
    }

    cout << cnt_diff << " " << cnt_same << endl;
}