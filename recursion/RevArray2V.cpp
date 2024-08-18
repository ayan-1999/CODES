// reverse array using two variable.
#include <iostream>
using namespace std;
void RevArray(int Arr[], int first, int last)
{
    if (first >= last)
        return;
    swap(Arr[first], Arr[last]);
    RevArray(Arr, first + 1, last - 1);
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
    RevArray(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}