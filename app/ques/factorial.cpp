#include <iostream>
using namespace std;
int main()
{
    int num = 0, prod = 1;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        prod = prod * i;
    }
    cout << prod;
}