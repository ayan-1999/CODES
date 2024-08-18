#include <iostream>
using namespace std;
int main()
{
    int inp = 0, rim = 0, sum = 0, prod = 1, x;
    cout << "give no" << endl;
    cin >> inp;
    x = inp;
    while (inp > 0)
    {
        rim = inp % 10;
        inp = inp / 10;
        for (int i = 1; i <= rim; i++)
        {
            prod = prod * i;
        }
        sum = sum + prod;
        prod = 1;
    }
    if (x == sum)
    {
        cout << x << " is strong no.";
    }
    else
    {
        cout << x << " is not strong no.";
    }
}