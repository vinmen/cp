/*
    recursive palindrome
*/

#include <iostream>
#include <string>
using namespace std;

//madam

bool isPalindrome(string s) {   
    if(s.length() <= 1)
        return true;
    else
        if(s[0] == s[s.length() - 1])
            return isPalindrome(s.substr(1, s.length() - 2));
        else
            return false;
}

int main() {
    string s;
    cin >> s;    
    cout << (isPalindrome(s) ? "true" : "false");
    return 0;
}