#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

void show_arr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    LOG("");
}

int digit(int n) {
    return (log10(n)+1);
}

int func() {
    //..
    return 0;
}

main() {
    bool isValid = true, flag = false;
    long long t, x, y, n, cnt = 0, sum = 0; 
    string s;
    // cin >> t;

    // for(int k = 0; k < t; k++) {
    //     cin >> n;
    // }

    cin >> x >> y;
    long long a[x];
    for(int i = 0; i < x; i++) {
        cin >> a[i];
    }
    sort(a, a+x, greater<long long>());

    for(long i = 0; i < x; i++) {
        if(a[i] <= y) {
            if(((y/a[i]) + 1) <= x) {
                sum += (y/a[i]) + 1;
                if(sum > x)
                    break;
                else 
                    cnt++;
                
            }
            else {
                break;
            }
        }
        else {
            sum += 1;
            cnt++;
        }
    }

    LOG(cnt);
}