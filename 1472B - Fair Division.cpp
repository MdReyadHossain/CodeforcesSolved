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
    long long t, x, y, n, cnt_1 = 0, cnt_2 = 0, sum = 0; 
    string s;
    cin >> t;

    for(int k = 0; k < t; k++) {
        cin >> n;
        long a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 1) 
                cnt_1++;
            else 
                cnt_2++;
        }

        if((cnt_1%2) == 0 && cnt_1 > 0) 
            LOG("YES");
        
        else if((cnt_2%2) == 0 && (cnt_1) == 0)
            LOG("YES");

        else 
            LOG("NO");

        cnt_1 = cnt_2 = 0;
    }
}