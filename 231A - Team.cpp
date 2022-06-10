#include <iostream>
using namespace std;

main() {
    int n, flag = 0, count = 0;
    cin >> n;
    int arr[n][3];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                flag++;
            }
        }
        if (flag > 1) {
            count++;
        }
        flag = 0;   
    }
    cout << count << endl;
}
