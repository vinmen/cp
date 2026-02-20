
/*
    https://codeforces.com/problemset/problem/118/A
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string out;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' &&
            s[i] != 'u' && s[i] != 'y' && s[i] != 'A' && s[i] != 'E' &&
            s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] != 'Y') {
            out = out + "." + char(tolower(s[i]));
        }
    }

    cout << out << endl;
    return 0;
}