#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0;
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << a << b;
}