#include <iostream>
using namespace std;

void chat(string type) {
    int flag = 0;
    for(int i = 0; i < type.length(); i++) {
        if(type[i] == 'h'){
            i++;
            if(i == type.length())
                break;
            while(type[i] != 'e') {
                i++;
                if(i == type.length())
                    break;
            }
            if(type[i] == 'e') {
                i++;
                if(i == type.length())
                    break;
                while(type[i] != 'l') {
                    i++;
                    if(i == type.length())
                    break;
                }
                if(type[i] == 'l') {
                    i++;
                    if(i == type.length())
                        break;
                    while(type[i] != 'l') {
                        i++;
                        if(i == type.length())
                        break;
                    }
                    if(type[i] == 'l') {
                        i++;
                        if(i == type.length())
                            break;
                        while(type[i] != 'o') {
                            i++;
                            if(i == type.length())
                            break;
                        }
                        if(type[i] == 'o'){
                            flag++;
                        }
                    }
                }
            }
        }
    }
    if(flag != 0)
        cout << "YES" << endl;
    else if(flag == 0)
        cout << "NO" << endl;
}

int main() {
    string type;
    cin >> type;
    chat(type);
}