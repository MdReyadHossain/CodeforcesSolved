#include <iostream>
#include <string>
using namespace std;

void display_dangerous(int count) {
    if(count >= 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

void football(string player, int count) {
    for(int i = 0; i < player.length(); i++){
        count = 0;
        while(player[i] == '0') {
            count++;
            if(count == 7){
                break;
            }
            i++;
        }
        if(count == 7)
            break;
        count = 0;
        while(player[i] == '1') {
            count++;
            if(count == 7){
                break;
            }
            i++;
        }
        if(count == 7)
            break;
        --i;
    }
    display_dangerous(count);
}

int main(){
	string player;
    cin >> player;

    int count = 0;
    football(player, count);
}