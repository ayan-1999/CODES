// check if given array is pallindrome or not
#include <iostream>
using namespace std;
bool Pal(int Arr[], int i, int n)
{
    if (i >= n / 2)
        return true;
    if (Arr[i] != Arr[n - i - 1])
    {
        return false;
    }
    return Pal(Arr, i + 1, n);
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
    bool k = Pal(a, 0, n);
    cout << k;
}