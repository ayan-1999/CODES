//  x^n
#include <iostream>
using namespace std;
int printName(int n, int x)
{
    if (n < 1)
        return 1;
    return x * printName(n - 1, x);
}
int main()
{
    int a, b;
    cin >> a >> b;
    int k = printName(a, b);
    cout << k;
}