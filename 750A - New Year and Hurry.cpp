#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

int add_time(int &time_hour, int &hour, int &time_min, int &min) { //update time_hour and time_min
    if((time_min+min) >= 60) {
        time_hour = (time_hour + hour) + ((time_min+min)/60);
        time_min = (time_min+min)%60;
    }
    else {
        time_hour = time_hour + hour;
        time_min = time_min + min;
    }
}

main() {
    bool isValid = true;
    int n, t, hour, min;
    int cnt = 0, time_hour = 20, time_min = 0, prb = 0; 
    cin >> n;
    cin >> t;
    hour = t / 60;
    min = t % 60;
    add_time(time_hour, hour, time_min, min); 

    for(int i = 1; i <= n; i++) {
        prb = 5*i;
        hour = prb/60;
        min = prb%60;
        add_time(time_hour, hour, time_min, min);

        if(time_hour < 24) 
            cnt++;
        else if(time_hour == 24 && time_min == 0)
            cnt++;
        else 
            break;
    }

    LOG(cnt);
}