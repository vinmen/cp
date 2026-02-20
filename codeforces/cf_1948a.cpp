/*
    https://codeforces.com/contest/1948/problem/A
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    int n;

    cin >> t;
    while (t--)
    {        
        cin >> n;
        if(n == 1) {        
            cout << "NO" << endl;
        }
        else if(n % 2 == 0) {
            cout << "YES" << endl;
            int letter = 65;
            for(int i = 0; i < n / 2; i++) {
                int j = 2;                 
                while(j--) {
                    cout << char(letter);
                }
                if(letter == 90)
                    letter = 65;
                else
                    letter++;
            }
            cout << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}