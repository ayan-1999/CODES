#include <iostream>
using namespace std;
int main()
{
    int inp = 0, sum = 0;
    cin >> inp;
    for (int i = 1; i < inp; i++)
    {
        if (inp % i == 0)
        {
            sum = sum + i;
        }
    }
    if (inp == sum)
    {
        cout << inp << " is perfect no.";
    }
    else
    {
        cout << inp << " is not perfect no.";
    }
}