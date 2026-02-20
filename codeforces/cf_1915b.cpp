#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    int row = 3;
    string s;

    cin >> t;
    while (t--) {
        while (row--) {
            cin >> s;
            if (s.find('?') != string::npos) {
                if (s.find('A') == string::npos)
                    cout << "A" << endl;
                else if (s.find('B') == string::npos)
                    cout << "B" << endl;
                else
                    cout << "C" << endl;
            }
        }
        row = 3;
    }

    return 0;
}