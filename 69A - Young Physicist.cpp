#include<iostream>
using namespace std;

main() {
    int n, total = 0, sum[3], count = 0;
    cin >> n;
    int v[n][3];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> v[i][j];
        }
    }

    for(int j = 0; j < 3; j++) {
        for(int i = 0; i < n; i++) {
            total += v[i][j];
        }
        sum[j] = total;
    }

    for(int i = 0; i < 3; i++) {
        if(sum[i] != 0) {
            cout << "NO" << endl;
            count++;
            break;
        }
    }

    if(count == 0) {
        cout << "YES" << endl;
    }
}