
#include <iostream>
#include <string>
using namespace std;

int main () {

    string upper_w;
    string lower_w;
    string s;
    cin >> s;

    // A-Z => 65 - 90
    // a-z => 97 - 122
    int lower_count = 0;
    int upper_count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= 97 && s[i] <= 122) {            
            lower_w = lower_w + s[i];
            upper_w = upper_w + (char) (65 + (s[i] - 97));
            lower_count++;
        }            
        else {            
            lower_w = lower_w + (char) (97 + (s[i] - 65));
            upper_w = upper_w + s[i];
            upper_count++;
        }
    }

    if(lower_count >= upper_count)
        cout << lower_w << endl;
    else
        cout << upper_w << endl;

    return 0;
}