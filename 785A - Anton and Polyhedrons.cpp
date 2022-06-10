#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

main() {
    int n, sum = 0; 
    cin >> n;
    string poly;

    for(int i = 0; i < n; i++) {
        cin >> poly;
        if(poly == "Tetrahedron") {
            sum = sum + 4;
        }
        else if(poly == "Cube") {
            sum = sum + 6;
        }
        else if(poly == "Octahedron") {
            sum = sum + 8;
        }
        else if(poly == "Dodecahedron") {
            sum = sum + 12;
        }
        else if(poly == "Icosahedron") {
            sum = sum + 20;
        }
        else 
            continue;
    }
    LOG(sum);
}