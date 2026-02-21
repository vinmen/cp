
// reverse string using recursion

#include <iostream>
#include <string>

using namespace std;

string reverse(string input)
{
    if(input.length() == 1)
        return input;
    else
        return input.substr(input.length() - 1, 1) + reverse(input.substr(0, input.length() - 1));
}

int main()
{    
    string input;
    cout << "Enter string :";
    cin >> input;
    cout << reverse(input);    
    return 0;
}