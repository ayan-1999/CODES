#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, rem = 0;
    cout << "Give two no.";
    cin >> a >> b;
    while (rem != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    cout << b;
}