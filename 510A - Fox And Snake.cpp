#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

main() {
    bool isValid = true;
    int n, m, cnt = 0; 
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i%2 == 0) // even i
                cout << "#" ;

            else { // odd i
                if(cnt%2 == 0) { // cnt even
                    if(j == (m-1)) {
                        cout << "#" ;
                        cnt++;
                    }
                    else
                        cout << "." ;
                }
                
                else { // cnt odd
                    if(j == 0) 
                        cout << "#" ;
                    else
                        cout << "." ;
                    if(j == (m-1))
                        cnt++;
                }
            }
        }
        cout << endl;
    }
}