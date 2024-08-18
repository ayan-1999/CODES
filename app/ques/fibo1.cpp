#include <iostream>
using namespace std;
int main()
{
    int inp = 0, val1 = 0, val2 = 1, sum = 0; // inp=input,val=1st value//
    cin >> inp;
    for (int i = 1; i <= inp; i++)
    {
        cout << val1 << " ";
        sum = val1 + val2;
        val1 = val2;
        val2 = sum;
    }
}