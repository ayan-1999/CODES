#include <iostream>
using namespace std;
int main()
{
    int a, x, sum = 0;
    cout << "Give a no.";
    cin >> a;
    x = a;
    int sqr = a * a;
    while (sqr > 0)
    {
        int rem = sqr % 10;
        sqr = sqr / 10;
        sum = sum + rem;
    }
    if (x == sum)
    {
        cout << x << " is a neon no.";
    }
    else
    {
        cout << x << " is not a neon no.";
    }
}