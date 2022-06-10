#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout << x << endl

main() {
    int a[5][5], count = 0, flag = 0, br = 0, m, n;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(a[i][j] == 1){
                while(i != 2 || j != 2){
                    if(i > 2){
                        i--;
                        count++;
                    }
                    if(i < 2){
                        i++;
                        count++;
                    }
                    if(j > 2){
                        j--;
                        count++;
                    }
                    if(j < 2){
                        j++;
                        count++;
                    }
                }
                flag++;
                break;
            }
        }
        if(flag != 0)
            break;
    }

    LOG(count);
}