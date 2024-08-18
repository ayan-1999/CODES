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
    for (int i = 0; i < n - 1; i++) // this loop is for selection
    {                               // upto n-1 cz last one is already sorted
        int mini = i;
        for (int j = i + 1; j < n; j++) // for checking from i+1 index to n-1 th index
        {
            if (a[j] < a[mini])
            {
                mini = j; // here mini stores the index of lowest no.
            }
        }
        int swap; // here swapping happens once in ith loop
        swap = a[i];
        a[i] = a[mini];
        a[mini] = swap;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
