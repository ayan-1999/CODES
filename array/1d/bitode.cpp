//binary to decimal
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i] * pow(2, (n - (i + 1)));
    }
    cout << sum;
}
