#include <iostream>
using namespace std;
int main()
{
    int inp = 0;
    int count = 0;
    cout << "Give a no" << endl;
    cin >> inp;
    for (int j = 2; j <= inp; j++)
    {
        count = 0;
        for (int i = 2; i <= j - 1; i++)
        {
            ;
            if (j % i == 0)
            {
                count = count + 1;
            }
        }
        if (count == 0)
        {
            cout << j << " ";
        }
    }
}