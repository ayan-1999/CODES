#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b = a[0];
    for (int i = 0; i < n; i++)
    {
        if (b > a[i])
        {
            b = a[i];
        }
    }
    cout << b;
}