
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    int n;
    int a, b, l;  

    cin >> t;
    while (t--)
    {
        cin >> n;
        while (n--)
        {
            cin >> a;
            cin >> b;
            cin >> l;
            
            if(l % a != 0 && l % b != 0)
                cout << 1 << endl;
            else {
                //20 => 2, 5
            }
        }
    }

    return 0;
}