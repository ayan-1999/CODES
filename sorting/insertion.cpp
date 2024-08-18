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
    // 1st loop runs for the  section of sorted and unsorted portion of array
    for (int i = 1; i < n; i++)
    {
        // box stores every value for checking and stores it for future use.
        int box = i;
        // j is the previous index of i
        int j = i - 1;
        while (j >= 0 && a[j] > box) // in this loop it checks if there is any element greater than box
        {
            a[j + 1] = a[j]; // if yes it enters in the loop and push the greater ele. to its right
            j = j - 1;       // to make space for the actual ele.
        }
        a[j + 1] = box; // inserts the actual element in its original position
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
