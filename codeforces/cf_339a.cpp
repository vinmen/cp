#include <iostream>
#include <string>

using namespace std;

int main()
{
    string one = "";
    string two = "";
    string three = "";
    string s;
    cin >> s;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '1')
            one = one + "1+";
        else if(s[i] == '2')
            two = two + "2+";
        else if(s[i] == '3')
            three = three + "3+";
    }
    
    string out = one + two + three;
    cout << out.substr(0, out.length() - 1);

    return 0;
}