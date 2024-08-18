// reverse print array
#include <iostream>
using namespace std;
void RevArray(int n, int Arr[])
{
    if (n < 0)
        return;
    cout << Arr[n] << " ";
    RevArray(n - 1, Arr);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    RevArray(n - 1, a);
}