#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout << x << endl

main() {
    bool isValid = true;
    int n, sum = 0; 
    string s1, s2, s3, pile;
    cin >> s1 >> s2 >> s3;

    pile = s1 + s2;
    if(pile.length() != s3.length()) {
        isValid = false;
    }

    for(int i = 0; i < pile.length(); i++) {
        for(int j = 0; j < s3.length(); j++) {
            if(pile[i] == s3[j]) {
                s3.erase(j, 1);
                break;
            }
        }
    }

    if(s3.length() == 0 && isValid)
        LOG("YES");
    else 
        LOG("NO");
}