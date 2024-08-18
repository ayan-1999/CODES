#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    cin >> num;
    if (num % 2 == 0)
        cout << num << " is even.";
    else
        cout << num << " is odd.";
}