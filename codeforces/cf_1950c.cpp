
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    string s;  
    int hour;    
    
    cin >> t;    
    while (t--)
    {
        cin >> s;
        hour = stoi(s.substr(0,2));
        if(hour == 0) {
            cout << 12 << s.substr(2) << " AM" << endl;
        }
        else if(hour == 12) {
            cout << s << " PM" << endl;
        }
        else if(hour < 12) {
            cout << s << " AM" << endl;
        }        
        else {
            hour = hour - 12;
            if(hour < 10)
                cout << "0";            
            cout << hour << s.substr(2) << " PM" << endl;
        }
    }
    return 0;
}