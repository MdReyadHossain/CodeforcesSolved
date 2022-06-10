#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

main() {
    string temp;
    char s;
    int a[50], count = 0, n = 0;
    cin >> temp;

    for(int i = 0; i < temp.length(); i++){
        if(temp[i] != '+'){
            s = temp[i];
            a[n] = s - 48;
            n++;
        }
    }

    for(int j = 0; j < n; j++){
        count = 0;
        for(int i = 0; i < n; i++){
            //compare elements
            if(a[i] > a[i+1]){
                swap(a[i], a[i+1]);
                count++;
            }
        }
        if(count == 0){break;}
    }

    for(int i = 0; i < n; i++){
        cout << a[i];
        if(i != (n-1))
            cout << '+';
    }
}