#include <iostream>
#include <math.h>
using namespace std;
 
main(){
    long long flag_m, flag_n, m, n, a;
    cin >> m >> n >> a;

    if(m % a != 0) {
        flag_m = (m / a) + 1;
    }

    if(n % a != 0) {
        flag_n = (n / a) + 1;
    }

    if(m % a == 0) {
        flag_m = (m / a);
    }

    if(n % a == 0) {
        flag_n = (n / a);
    }

    cout << flag_m * flag_n << endl;
}