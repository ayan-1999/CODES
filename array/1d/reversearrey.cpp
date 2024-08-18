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
    int b = 0;
    for (int i = 0; i < n / 2; i++)
    {
        b = a[i];
        a[i] = a[n - (i + 1)];
        a[n - (i + 1)] = b;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}