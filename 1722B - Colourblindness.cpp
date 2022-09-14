#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define LOG(x) cout << x << endl
 
int func() {
    //..
    return 0;
}
 
main() {
    bool isValid = false, isBreak = false;
    int t, n, m, x, y, cnt = 0; 
    string r1, r2;
    cin >> t;
 
    for(int k = 0; k < t; k++) {
        cin >> n;
        cin >> r1;
        cin >> r2;
        
        for(int i = 0; i < n; i++) {
            if(r1[i] == 'R' && r2[i] == 'B' || r1[i] == 'R' && r2[i] == 'G') 
                break;

            else if(r2[i] == 'R' && r1[i] == 'B' || r2[i] == 'R' && r1[i] == 'G')
                break;

            else 
                cnt++;
        }
        if(cnt == n) 
            LOG("YES");
        
        else 
            LOG("NO");

        cnt = 0;
    }
}