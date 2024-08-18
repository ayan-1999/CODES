// n to 1 print
#include <iostream>
using namespace std;
void printName(int n)
{
    if (n < 1)
        return;
    cout << n << "\n";
    printName(n - 1);

}
int main()
{
    int b;
    cin >> b;
    printName(b);
}