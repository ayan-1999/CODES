// i to n print
#include <iostream>
using namespace std;
void printName(int n)
{
    if (n < 1)
        return;
    printName(n - 1);
    cout << n << "\n";
}
int main()
{
    int b = 0;
    cin >> b;
    printName(b);
}