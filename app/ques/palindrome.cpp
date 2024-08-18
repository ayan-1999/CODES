#include <iostream>
using namespace std;
int main()
{
    string no;
    cin >> no;
    int x = no.length();
    bool a = true;
    for (int i = 0; i < x; i++)
    {
        if (no[i] != no[x - i - 1])
        {
            a = false;
            break;
        }
    }
    if (a == true)
    {
        cout << no << " is palindrome no.";
    }
    else
    {
        cout << no << " is not palindrome no.";
    }
}