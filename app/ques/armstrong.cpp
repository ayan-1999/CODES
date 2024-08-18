#include <iostream>
using namespace std;
int main()
{
    int inp = 0, rim = 0, sum = 0, x = 0; // inp=input,rem=remainder//
    cout << "give no" << endl;
    cin >> inp;
    x = inp;
    while (inp > 0)
    {
        rim = inp % 10;
        inp = inp / 10;
        sum = sum + rim * rim * rim;
    }
    if (x == sum)
    {
        cout << x << " is an armstrong no.";
    }
    else
    {
        cout << x << " is an not armstrong no.";
    }
}