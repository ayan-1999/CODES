// Input values in an array and display the array
// elements using pointer.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int *ptr = &arr[0];
    for (int i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << " ";
    }
}
