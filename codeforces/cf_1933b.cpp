
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    int n;
    int input;
    int sum = 0;
    vector<int> v;

    cin >> t;
    while (t--)
    {
        cin >> n;
        while (n--)
        {
            cin >> input;
            v.push_back(input);
        }

        sum = 0;
        for (int i = 0; i < v.size(); i++)
            sum = sum + v[i];

        int mod = sum % 3;
        if (mod == 0)
            cout << "0" << endl;
        else if (mod == 2)
            cout << "1" << endl;
        else
        {
            bool found = false;
            for (int i = 0; i < v.size(); i++)
            {
                if ((sum - v[i]) % 3 == 0)
                {
                    cout << "1" << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "2" << endl;
        }
        v.clear();
    }

    return 0;
}