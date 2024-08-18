#include <iostream>
#include <vector>
using namespace std;
void mergeTwoArr(int arr[], int low, int mid, int high)
{
    vector<int> ans;
    int p1 = low;
    int p2 = mid + 1;
    int m = mid;
    int n = high;
    while (p1 <= m && p2 <= n)
    {
        if (arr[p1] <= arr[p2])
        {
            ans.push_back(arr[p1]);
            p1++;
        }
        else
        {
            ans.push_back(arr[p2]);
            p2++;
        }
    }
    while (p2 <= n)
    {
        ans.push_back(arr[p2]);
        p2++;
    }
    while (p1 <= m)
    {
        ans.push_back(arr[p1]);
        p1++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = ans[i - low];
    }
}
void mergeSort(int Arr[], int low, int high)
{
    if (low == high)
        return;
    int mid = (high + low) / 2;
    mergeSort(Arr, low, mid);
    mergeSort(Arr, mid + 1, high);
    mergeTwoArr(Arr, low, mid, high);
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
    mergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
