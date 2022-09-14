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
    cin >> t;

    for(int k = 0; k < t; k++) {
        cin >> n;
        long long a[n];
        long long b[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        
        x = *min_element(a, a+n);
        y = *min_element(b, b+n);

        for(int i = 0; i < n; i++) {
            if(a[i] != x && b[i] != y) 
                sum += max(a[i]-x, b[i]-y);
            
            else if(a[i] != x) 
                sum += (a[i]-x);

            else if(b[i] != y) 
                sum += (b[i]-y);
        }
        
        LOG(sum);
        sum = 0;
    }

    
}