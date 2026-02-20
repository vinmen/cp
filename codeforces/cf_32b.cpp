
#include <iostream>
#include <string>

using namespace std;

int main () {

    string s;
    string o;

    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if(s[i] == '.') {
            o = o + '0';
        }
        else {
            if(s[i + 1] == '.') {
                o = o + '1';
            }
            else {
                o = o + '2';
            }
            i++;
        }        
    }
    cout << o << endl;
    
    return 0;
}
