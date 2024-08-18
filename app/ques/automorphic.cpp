#include <iostream>
using namespace std;

int main()
{
    int inp = 0, x, sum = 0, sumrim = 0;
    bool a = true;
    cout << "Type a number: " << endl;
    cin >> inp;
    x = inp;
    int sqr = inp * inp;
    while (inp > 0)
    {
        int rim = inp % 10;
        inp = inp / 10;
        int sqrrim = sqr % 10;
        sqr = sqr / 10;
        if (rim != sqrrim)
        {
            a = false;
        }
    }
    if (a == true)
    {
        cout << x << " is automorphic no.";
    }
    else
    {
        cout << x << " is not automorphic no.";
    }
}