#include <bits/stdc++.h>
using namespace std;
void pA(int arr[])
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int patition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    cout << i << " " << j << endl;
    pA(arr);
    while (i < j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        cout << i << " " << j << endl;

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[low]);
    pA(arr);
    return j;
}
void qsort(int arr[], int low, int high)
{
    if (low < high)
    {
        int partindex = patition(arr, low, high);
        qsort(arr, low, partindex - 1);
        qsort(arr, partindex + 1, high);
    }
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
    qsort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
