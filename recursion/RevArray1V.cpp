// reverse array using one variable.
#include <iostream>
using namespace std;
void RevArray(int Arr[], int i, int n)
{
    if (i >= n / 2)
        return;
    swap(Arr[i], Arr[n - i - 1]);
    RevArray(Arr, i + 1, n);
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
    RevArray(a, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}