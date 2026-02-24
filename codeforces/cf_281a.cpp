
#include <iostream>
#include <string>
using namespace std;

int main () {    
    string s;
    cin >> s;

    // A-Z => 65 - 90
    // a-z => 97 - 122

    if(s[0] >= 97 && s[0] <= 122)
        s[0] = (char) (65 + (s[0] - 97));
    
    cout << s << endl;
    return 0;
}