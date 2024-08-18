// Input values in an array and add the Array
// elements using pointer.
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int arr[n];
    int *ptr = &arr[0];
    for (int i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + *(ptr + i);
    }
    cout << sum;
}
