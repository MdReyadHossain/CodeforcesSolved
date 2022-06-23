#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

main() {
    bool isValid = true;
    int n, cnt = 0; 
    cin >> n;
    int point[n];

    for(int i = 0; i < n; i++) {
        cin >> point[i];
        if(point[i] < point[i-1] && i != 0) {
            for(int j = 0; j < i-1; j++){
                if(point[i] >= point[j]) { 
                    isValid = false;
                    break;
                }
            }
            if(isValid)
                cnt++;
        }
        if(point[i] > point[i-1] && i != 0) { 
            for(int j = 0; j < i-1; j++){
                if(point[i] <= point[j]) { 
                    isValid = false;
                    break;
                }
            }
            if(isValid)
                cnt++;
        }
        isValid = true;
    }

    LOG(cnt);
}