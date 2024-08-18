#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int num, x = -1;
    cout << "give a no" << endl;
    cin >> num;
    for (int i = 0; i < n; i++)
    {
        if (num == a[i])
        {
            x = i;
            break;
        }
    }
    cout << "index is " << x;
}
