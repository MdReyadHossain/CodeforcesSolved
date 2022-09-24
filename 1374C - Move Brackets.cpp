#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define ll long long
#define dl double long
#define LOG(x) cout << x << endl
 
bool isValid = false, flag = false;
pair <int, int> p[10000];
int x, y, z, n, m, cnt = 0, sum = 0, sum1 = 0; 
double f, g;
string s;

void show_arr(int arr[]) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    LOG("");
}

int digit(int n) {
    return (log10(n)+1);
}

void solve() {
    cnt = 0;
    cin >> n >> s;

    for(int i = 0; i < n; i++) {
        if(s[i] == '(') {
            cnt++;
            if(s[i+1] == ')') {
                cnt--;
                s[i] = '0';
                s[i+1] = '0';
                i = -1;
                cnt = 0;
                continue;
            }

            else if(s[i+1] == '0') {
                for(int j = i+2; j < n; j++) {
                    if(s[j] == ')') {
                        cnt--;
                        s[i] = '0';
                        s[j] = '0';
                        i = -1;
                        cnt = 0;
                        break;
                    }

                    else if(s[j] == '(') {
                        i = j-1;
                        break;
                    }
                }
            }
        }
    }

    LOG(cnt);
}

main() {
    int t;
    cin >> t;
 
    while(t--)
        solve();
        
    return 0;
}