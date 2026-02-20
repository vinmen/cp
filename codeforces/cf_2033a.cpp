
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
        if(n % 2)
            cout << "Kosuke" << endl;
        else
            cout << "Sakurako" << endl;        
    }
    return 0;
}