#include <iostream>
using namespace std;
int main()
{
    int inp = 0, rim = 0;
    cout << "give no" << endl;
    cin >> inp;

    while (inp > 0)
    {
        rim = inp % 10;
        inp = inp / 10;
        cout << rim << " ";
    }
}