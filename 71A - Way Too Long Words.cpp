#include<iostream>
#include <string>
using namespace std;
 
main() {
    int num;
    cin >> num;
    string word[num], spell;
    for (int i = 0; i < num; i++){
        cin >> word[i];
    }
 
    for (int i = 0; i < num; i++) {
        if (word[i].length() <= 10) {
            cout << word[i] << endl;
        }
        else {
            spell = word[i];
            cout << spell[0] << (word[i].length() - 2) << spell[word[i].length() - 1] << endl;
        }
    }
}