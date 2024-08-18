#include <iostream>
using namespace std;
int isPrime(int n)
{

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a;
    cin >> a;
    bool ans = isPrime(a);
    cout << (ans ? "True" : "False");
}