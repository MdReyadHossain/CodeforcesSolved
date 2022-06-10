#include <bits/stdc++.h>
#include <iostream>
using namespace std;

main() {
    int n, min, max = 0, min_index, max_index; 
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];  
        if(a[i] <= min) {
            min = a[i];
            min_index = i;
        } 
        if(a[i] > max) {
            max = a[i];
            max_index = i;
        }
    }

    if(min_index > max_index) 
        cout << ((n-1) - min_index) + (max_index) << endl;
    
    else 
        cout << ((n-1) - min_index) + (max_index) - 1 << endl;
}