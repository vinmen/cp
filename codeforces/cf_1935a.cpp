#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    int n;
    string s;
    bool palindrome;

    cin >> t;
    while (t--)
    {
        palindrome = true;
        cin >> n;
        cin >> s;
        
        for (int i = 0; i <= s.length() / 2; i++)
        {
            if (s[i] < s[s.length() - i - 1])
            {
                palindrome = false;
                cout << s << endl;
                break;
            }
            else if (s[i] > s[s.length() - i - 1])
            {
                palindrome = false;
                string temp = s;
                reverse(temp.begin(), temp.end());
                cout << temp + s << endl;
                break;
            }
        }
        if (palindrome)
            cout << s << endl;
    }

    return 0;
}