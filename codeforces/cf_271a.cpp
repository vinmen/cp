
#include <iostream>

using namespace std;

int main() {

    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int y;
    
    cin >> y;
    y++;

    while(1) {
        i = y / 1000;
        j = (y / 100) % 10;
        k = (y / 10) % 10;
        l = y % 10;

        if(i == j || i == k || i == l || j == k || j == l || k == l) {
            y++;
        }
        else {
            break;
        }        
    }  

    cout << y << endl;
    return 0;
}