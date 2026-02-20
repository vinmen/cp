
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(string s) {
    int l = s.size();
    for(int i = 0; i < s.size() / 2; i++) {
        if(s[i] != s[l - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    int n;

    cin >> t;
    while (t--) {
        cin >> n;
        string s;        
        cin >> s;        
        
        if(isPalindrome(s)) {
            cout << "0\n" << endl;
        }
        else {
            int l = s.size();
            for(int i = 0; i < s.size() / 2; i++) {
                if(s[i] != s[l - 1 - i]) {
                    if(s[i] < s[l - 1 - i]) {
                        s.erase(i, 1);
                    }
                }
            }
        }           
    }

    return 0;
}