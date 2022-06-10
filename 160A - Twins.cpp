#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl;
#define IN(x) cin >> x;

int twin(int a[], int n) {
    int count = 0;
    int sum = 0, min = 0;
    for(int i = 0; i < n; i++) {
        sum = a[i] + sum;   
    }

    for(int i = n-1; i >= 0; i--) {
        min = a[i] + min;       
        count++;
        if(min > sum * 0.5)
            break;
    }
    return count;
}

void sort(int a[], int n) {
    int count = 0;
    for(int j = 0; j < n; j++){
        count = 0;
        for(int i = 0; i < n; i++){
            if(a[i] > a[i+1]){
                swap(a[i], a[i+1]);
                count++;
            }
        }
        if(count == 0)
            break;
    }

    twin(a, n);
}

main() {
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, n);
    cout << twin(a, n) << endl;
}