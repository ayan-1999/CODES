//  sum of 1 to n
#include <iostream>
using namespace std;
int printName(int n)
{
    if (n < 1)
        return 0;
    return n + printName(n - 1);
}
int main()
{
    int a;
    cin >> a;
    int k = printName(a);
    cout << k;
}