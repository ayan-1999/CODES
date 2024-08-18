#include <iostream>
using namespace std;
int main()
{
    int num = 1, count = 0;

    cin >> num;
    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << num << " is prime.";
    }
    else
    {
        cout << num << " is not prime.";
    }
}